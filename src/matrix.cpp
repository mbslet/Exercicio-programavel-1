#include "matrix.hpp"
#include<iostream>

using namespace std;

Matrix::Matrix(){
    for(int l = 0; l<40; l++){
      for(int k = 0; k<70; k++){
        grid[l][k] = false;
      }
    }
}

Matrix::~Matrix(){

}

void Matrix::printGrid(){
  cout << "\e[2J\e[H";
  for (int i = 0; i < 40; i++) {
    for (int j = 0; j < 70; j++) {
      if( grid[i][j] ) cout << "*";
      else cout << "-";
    }
    cout << "\n";
  }
  /*
  for (int i = 0; i < 40; i++) {
    for (int j = 0; j < 70; j++) {
      // if( grid[i][j] ) cout << "*";
      //else cout << "-";
        cout << neighbors[i][j];
    }
    cout << "\n";
  }
  */
}
void Matrix::setGrid(int i, int j, bool s){
    this->grid[i][j] = s;
}
matrixBool Matrix::getGrid(){
    return grid;
}

void Matrix::setGrid(matrixBool grid){
  for (int i = 0; i < 40; i++) {
    for (int j = 0; j < 70; j++) {
      this->grid[i][j] = grid[i][j];
    }
  }
}

void Matrix::checkNeighbors(){
  int soma = 0;
  for(int i = 0; i < 40; i++){
    for(int j = 0; j < 70; j++){
      soma = 0;
      if (i-1 >= 0 && j-1 >= 0) soma += grid[i-1][j-1];
      if (i-1 >= 0) soma += grid[i-1][j];
      if (i-1 >= 0 && j+1 < 70) soma += grid[i-1][j+1];
      if (j-1 >= 0) soma += grid[i][j-1];
      if (j+1 < 70) soma += grid[i][j+1];
      if (i+1 < 40 && j-1 >= 0)soma += grid[i+1][j-1];
      if (i+1 < 40) soma += grid[i+1][j];
      soma += grid[i+1][j+1];
      //cout << soma << endl;
      neighbors[i][j] = soma;
    }
  }
}

void Matrix::checkRules(){
  checkNeighbors();
  for(int i = 0; i < 40; i++){
    for(int j = 0; j < 70; j++){
      if(grid[i][j] == 0){
      if(neighbors[i][j] == 3)
        grid[i][j] = 1;
      }
      else{
        if(neighbors[i][j] < 2)
          grid[i][j] = 0;
        else if(neighbors[i][j] >= 2 && neighbors[i][j] < 4)
          grid[i][j] = 1;
        else if(neighbors[i][j] >= 4)
          grid[i][j] = 0;
        }
    }
  }
}
