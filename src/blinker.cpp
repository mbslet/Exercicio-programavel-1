#include "blinker.hpp"

Blinker::Blinker(){}

matrixBool Blinker::formABlinker(matrixBool mat1, int i, int j){
    mat1[i][j] = 1;
    mat1[i+1][j] = 1;
    mat1[i-1][j] = 1;
    return mat1;
  }
