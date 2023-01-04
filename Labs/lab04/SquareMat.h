//
// Created by baloo on 21/11/2022.
//

#ifndef LAB05_SQUAREMAT_H
#define LAB05_SQUAREMAT_H


class SquareMat {
private:
    int **data;
    int ndim;

public:
    SquareMat(int ndim);
    SquareMat(const SquareMat & sqm);
    SquareMat& operator=(const SquareMat &rhs);

    virtual ~SquareMat();
};


#endif //LAB05_SQUAREMAT_H
