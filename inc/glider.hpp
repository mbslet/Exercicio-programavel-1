#ifndef GLIDER_HPP
#define GLIDER_HPP
#include <iostream>
#include "matrix.hpp"

typedef bool(&matrixBool)[40][70];

class Glider {
private:
public:
    Glider();

    matrixBool formAGlider(matrixBool mat1, int i, int j);

};
#endif
