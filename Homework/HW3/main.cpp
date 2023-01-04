//#include <iostream>
//#include <fstream>
//#include <string>
//#include <sstream>
//#include "Virus.h"
//#include "Population.h"
//
//using namespace std;
//
////gets file names of config and first generation and returns a population of viruses.
//Population *getInfo(const string &configFileName, const string &firstGenerationFileName) {
//    ifstream file;
//
//    //handle config file
//    file.open(configFileName);
//    stringstream ss;
//    int dim, pm;
//
//    if (file) {
//        ss << file.rdbuf();
//    } else {
//        cerr << "Invalid Input\n";
//        exit(-1);
//    }
//    file.close();
//    ss >> dim;
//    ss >> pm;
//    int target[dim];
//    int value;
//    for (int i = 0; i < dim; i++) {
//        ss >> value;
//        target[i] = value;
//    }
//
//    //handle firstGeneration file
//    file.open(firstGenerationFileName);
//    int populationSize;
//    string name;
//
//    if (file) {
//        ss << file.rdbuf();
//    } else {
//        cerr << "Invalid Input\n";
//        exit(-1);
//    }
//    file.close();
//    ss >> populationSize;
//    int* ptrs = new int[populationSize];
//    for(int i = 0;i< populationSize;i++){
//        ptrs[i] = 0;
//    }
//    Population *population;
//    population = new Population(populationSize, dim, pm,ptrs);
//
//    for (int i = 0; i < populationSize; i++) {
//        ss >> name;
//        Virus *virus;
//        virus = new Virus(name, dim, target,ptrs+i);
//        for (int j = 0; j < dim; j++) {
//            ss >> value;
//            if (ss.eof()) {
//                cerr << "Invalid input." << endl;
//                exit(-1);
//            }
//            virus->setValue(value, j);
//        }
//        population->add(virus, i);
//    }
//
//    population->insertionSort();
//    population->setGOAT();
//    return population;
//}
//
//int main(int argc, char *argv[]) {
//    if (argc != 3) {
//        std::cerr << "Usage: run the program with <init file name> <location file name>" << std::endl;
//        return -1;
//    }
//
//    string configFile = argv[1];
//    string firstGenerationFile = argv[2];
//    Population *population = getInfo(configFile, firstGenerationFile);
//
//    int generations;
//    cin >> generations;
//
//    if (generations == 0) {
//        cout << population;
//    }
//
//    for (int i = 0; i < generations; i++) {
//        ++(*population);
//        *(*population);
//        population->setGOAT();
//        if (population->metTarget()) break;
//    }
//
//    cout << *population;
//    delete population;
//}