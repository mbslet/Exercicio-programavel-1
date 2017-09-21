#include "gosperglidergun.hpp"

matrixBool GosperGliderGun::formAGGG(matrixBool mat1, int i, int j){
    Block block1;
    Blinker blinker1;
    Matrix * mat2 = new Matrix();
    mat2->setGrid(mat1);
    mat2->setGrid(block1.formABlock(mat1, i+4, j+1));
    mat2->setGrid(block1.formABlock(mat1, i+2, j+35));
    mat2->setGrid(blinker1.formABlinker(mat1, i+5, j+11));
    mat2->setGrid(blinker1.formABlinker(mat1, i+5, j+17));
    mat2->setGrid(blinker1.formABlinker(mat1, i+3, j+21));
    mat2->setGrid(blinker1.formABlinker(mat1, i+3, j+22));
    mat2->setGrid(i+3, j+12, 1);
    mat2->setGrid(i+7, j+12, 1);
    mat2->setGrid(i+8, j+13, 1);
    mat2->setGrid(i+8, j+14, 1);
    mat2->setGrid(i+2, j+13, 1);
    mat2->setGrid(i+2, j+14, 1);
    mat2->setGrid(i+5, j+15, 1);
    mat2->setGrid(i+5, j+18, 1);
    mat2->setGrid(i+3, j+16, 1);
    mat2->setGrid(i+7, j+16, 1);
    mat2->setGrid(i+1, j+25, 1);
    mat2->setGrid(i+0, j+25, 1);
    mat2->setGrid(i+1, j+23, 1);
    mat2->setGrid(i+5, j+23, 1);
    mat2->setGrid(i+5, j+25, 1);
    mat2->setGrid(i+6, j+25, 1);

    return mat2->getGrid();
  }
