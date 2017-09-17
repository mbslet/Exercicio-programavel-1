#ifndef GOSPERGLIDERGUN_HPP
#define GOSPERGLIDERGUN_HPP
#include "matrix.hpp"
#include "block.hpp"
#include "blinker.hpp"

typedef bool(&matrixBool)[40][70];

class GosperGliderGun {
private:
public:
    matrixBool formAGGG(matrixBool mat1, int i, int j);

};
#endif
