#ifndef BLINKER_HPP
#define BLINKER_HPP
#include <iostream>
#include "matrix.hpp"
#include "cells.hpp"

typedef bool(&matrixBool)[40][70];

class Blinker {
private:
public:
    Blinker();

    matrixBool formABlinker(matrixBool mat1, int i, int j);

};
#endif
