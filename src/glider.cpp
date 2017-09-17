#include "glider.hpp"

Glider::Glider(){}

matrixBool Glider::formAGlider(matrixBool mat1, int i, int j){
    mat1[i][j+2] = 1;
    mat1[i+1][j] = 1;
    mat1[i+1][j+2] = 1;
    mat1[i+2][j+1] = 1;
    mat1[i+2][j+2] = 1;
    return mat1;
  }
