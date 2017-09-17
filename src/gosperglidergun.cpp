#include "gosperglidergun.hpp"

matrixBool GosperGliderGun::formAGGG(matrixBool mat1, int i, int j){
    Block block1;
    Blinker blinker1;
    Matrix * mat2 = new Matrix();
    mat2->setGrid(mat1);
    mat2->setGrid(block1.formABlock(mat1, i+4, j+0));
    mat2->setGrid(block1.formABlock(mat1, i+2, j+35));
    mat2->setGrid(blinker1.formABlinker(mat1, i+5, j+11));
    mat2->setGrid(blinker1.formABlinker(mat1, i+5, j+17));
    mat2->setGrid(blinker1.formABlinker(mat1, i+3, j+21));
    mat2->setGrid(blinker1.formABlinker(mat1, i+3, j+22));
    mat2->setGrid(3, 12, 1);
    mat2->setGrid(7, 12, 1);
    mat2->setGrid(8, 13, 1);
    mat2->setGrid(8, 14, 1);
    mat2->setGrid(2, 13, 1);
    mat2->setGrid(2, 14, 1);
    mat2->setGrid(5, 15, 1);
    mat2->setGrid(5, 18, 1);
    mat2->setGrid(3, 16, 1);
    mat2->setGrid(7, 17, 1);
    mat2->setGrid(1, 25, 1);
    mat2->setGrid(0, 25, 1);
    mat2->setGrid(1, 23, 1);
    mat2->setGrid(5, 23, 1);
    mat2->setGrid(5, 25, 1);
    mat2->setGrid(6, 25, 1);
    
    return mat2->getGrid();
  }
