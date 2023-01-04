//
// Created by baloo on 21/11/2022.
//
#include <random>
#include <iostream>
#include "SquareMat.h"

SquareMat::SquareMat(int ndim) : data(new int *[ndim]), ndim(ndim) {
    for (int i = 0; i < ndim; i++) {
        data[i] = new int[ndim];
    }

    int n;
    for (int i = 0; i < ndim; i++) {
        for (int j = 0; j < ndim; j++) {
            n = 100 + (random() % (999 - 100 + 1));
            data[i][j] = n;
        }
    }
    std::cout << "C'tor" << std::endl;
}

SquareMat::SquareMat(const SquareMat &sqm) {
    ndim = sqm.ndim;
    data = sqm.data;
    std::cout << "Copy C'tor" << std::endl;
}

SquareMat &SquareMat::operator=(const SquareMat &rhs) {
    if (this == &rhs) {
        return *this;
    }
    if (ndim != rhs.ndim) {
        ndim = rhs.ndim;
    }
    if(data != rhs.data) {
        data = new int*[ndim];
        for (int i = 0; i < ndim; i++) {
            data[i] = new int[ndim];
            for (int j = 0; j < ndim; j++) {
                data[i][j] = rhs.data[i][j];
            }
        }
    }
    std::cout << "operator=" << std::endl;
    return *this;
}

SquareMat::~SquareMat() {
    delete[] data;
    std::cout << "d'tor" << std::endl;
}




