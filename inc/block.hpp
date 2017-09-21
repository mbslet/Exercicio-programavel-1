#ifndef BLOCK_HPP
#define BLOCK_HPP
#include <iostream>
#include "matrix.hpp"

typedef bool(&matrixBool)[40][70];

class Block {
private:
public:
    Block();

    matrixBool formABlock(matrixBool mat1, int i, int j);

};
#endif
