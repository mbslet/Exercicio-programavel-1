#include <iostream>
#include "cells.hpp"

Cells::Cells(){
  if (Alive = '*')
  return true;
  else if (Alive = '-')
  return false;

}

Cells::~Cells(){

}

bool Cells::getAlive(){
    return alive;
}

void Cells::setCells(bool alive){
    this->alive = alive;
}
