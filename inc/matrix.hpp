#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>

using namespace std;

typedef bool(&matrixBool)[40][70];

class Matrix{
private:
  bool grid[40][70];
  int neighbors[40][70];

public:
  Matrix();
  ~Matrix();
  matrixBool getGrid();
  void setGrid(matrixBool grid); //Sobrescrita
  void printGrid();
  void setGrid(int x, int y, bool s);

  void checkNeighbors();
  void checkRules();

};

#endif
