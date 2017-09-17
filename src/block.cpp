#include "block.hpp"

Block::Block(){}

matrixBool Block::formABlock(matrixBool mat1, int i, int j){
    mat1[i][j] = 1;
    mat1[i+1][j] = 1;
    mat1[i][j+1] = 1;
    mat1[i+1][j+1] = 1;
    return mat1;
  }
