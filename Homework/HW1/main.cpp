//#include <iostream>
//#include <string>
//#include <sstream>
//#include "MyVector.h"
//#include "Observation.h"
//
//void newObservation(MyVector *vector, int observation_dim);
//
//void printObservation(MyVector *vector);
//
//void printMean(MyVector *vector, int observation_dim);
//
//void printCovarianceMatrix(MyVector *vector, int dim, int m);
//
//int main(int argc, char *argv[]) {
//    if (argc != 3) {
//        std::cout << "Invalid arguments <int <int>." << std::endl;
//        return -1;
//    }
//
//    //get parameters from cmd and init my observations vector.
//    int observation_dim = std::stoi(argv[1]);
//    int max_size = std::stoi(argv[2]);
//    auto *vector = new MyVector(observation_dim, max_size);
//
//
//    std::string main_menu = "[1] New observation\n"
//                            "[2] Print observation\n"
//                            "[3] Expected value vector\n"
//                            "[4] Covariance matrix\n"
//                            "[5] Exit";
//
//    std::string input;
//    int choice;
//
//
//    std::cout << main_menu << std::endl;
//
//    //main loop.
//    while (true) {
//        std::cin >> input;
//        try {
//            choice = std::stoi(input);
//        }
//        catch (std::exception &e) {
//            choice = 0;
//        }
//        switch (choice) {
//            case 1: {
//                newObservation(vector, observation_dim);
//                break;
//            }
//            case 2: {
//                printObservation(vector);
//                break;
//            }
//
//            case 3: {
//                printMean(vector, observation_dim);
//                break;
//            }
//            case 4: {
//                printCovarianceMatrix(vector, observation_dim, vector->getActualSize());
//                break;
//            }
//            case 5: {
//                delete vector;
//                exit(0);
//            }
//            default:
//                std::cerr << "Invalid option.\n" << std::endl;
//        }
//
//    }
//}
//
//void printObservation(MyVector *vector) {
//    std::string name;
//    std::cout << "Enter observation name:" << std::endl;
//    std::cin.ignore();
//    std::getline(std::cin, name);
//    for (int i = 0; i < vector->getActualSize(); i++) {
//        if (vector->getObservation(i).getName() == name) {
//            vector->getObservation(name).print();
//            return;
//        }
//    }
//    std::cerr << "Invalid or nonexistent observation.\n";
//}
//
//void newObservation(MyVector *vector, int observation_dim) {
//    std::string name;
//    std::string value;
//    int value_counter;
//    double d;
//
//    std::cout << "Enter observation name:" << std::endl; //set observation name
//    std::cin.ignore();
//    std::getline(std::cin, name);
//    auto *obs = new Observation(observation_dim);
//    obs->setName(name);
//
//    std::cout << "Enter observation values:" << std::endl; // set observation values.
//    std::string values;
//    std::getline(std::cin, values);
//    std::stringstream s(values);
//    value_counter = 0;
//    while (s >> value) {
//        d = std::stod(value);
//        obs->setValue(value_counter, d);
//        value_counter++;
//    }
//
//    if (value_counter != observation_dim) { // check if we get the right amount of values.
//        std::cerr << "Invalid observation." << std::endl;
//        delete obs;
//        return;
//    }
//
//    for (int i = 0; i < vector->getActualSize(); i++) { //check if observation is already in vector to update.
//        if (vector->getObservation(i).getName() == name)
//            vector->remove(i);
//    }
//    vector->add(*obs);
//}
//
//
//Observation getMean(MyVector *vector, int observation_dim) {
//    Observation mean(observation_dim);
//    for (int i = 0; i < observation_dim; i++) {
//        float n = 0;
//        for (int j = 0; j < vector->getActualSize(); j++) {
//            n += (float) vector->getObservation(j).getValue(i);
//        }
//        mean.setValue(i, n / (float) vector->getActualSize());
//    }
//    return mean;
//
//}
//
//void printMean(MyVector *vector, int observation_dim) {
//    if (vector->isEmpty()) {
//        std::cerr << "Empty calculator.\n";
//        return;
//    }
//    Observation mean = getMean(vector, observation_dim);
//    std::string num;
//    std::cout << "mean";
//    std::cout << " = [ ";
//    for (int i = 0; i < observation_dim; i++) {
//        std::cout << mean.getValue(i);
//        if (i != observation_dim - 1)
//            std::cout << " ";
//    }
//    std::cout << "]" << std::endl;
//}
//
//
//void printCovarianceMatrix(MyVector *vector, int dim, int m) {
//    if (vector->isEmpty()) {
//        std::cerr << "Empty calculator.\n";
//        return;
//    }
//    float mat[dim][dim];
//    for (int i = 0; i < dim; i++) {
//        for (int j = 0; j < dim; j++) {
//            mat[i][j] = 0;
//        }
//    }
//
//    Observation mean = getMean(vector, dim);
//    float norm;
//    if (m > 1) {
//        norm = float(m - 1);
//    } else {
//        norm = 1;
//    }
//    for (int i = 0; i < dim; i++) {
//        for (int j = 0; j < dim; j++) {
//            for (int k = 0; k < m; k++) {
//                mat[i][j] += float((((float) vector->getObservation(k).getValue(i) - (float) mean.getValue(i))
//                                    * ((float) vector->getObservation(k).getValue(j) - (float) mean.getValue(j))));
//            }
//            mat[i][j] *= (float) (1 / norm);
//        }
//    }
//    std::cout << "cov = [" << std::endl;
//    for (int i = 0; i < dim; i++) {
//        for (int j = 0; j < dim; j++) {
//            std::cout << " " << mat[i][j];
//        }
//        std::cout << "\n";
//    }
//    std::cout << "]";
//}
//
