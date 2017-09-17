#include <iostream>
#include "blinker.hpp"

Blinker::Blinker(){
void Blinker::setMblinker(){
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++ ){
      this->mblinker[i][j] = 1;
    }
  }
}

Blinker::~Blinker(){

}
 Blinker::getMblinker(){
  return mblinker;
}
void Blinker::setMblinker(Cells mblinker){
  this->mblinker = mblinker;
}









mat1.setGrid(3, 5, true);
mat1.setGrid(3, 4, true);
mat1.getGrid();
