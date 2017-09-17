#include <iostream>
#include "cells.hpp"

Cells::Cells(){
  alive = true;
}

bool Cells::getAlive(){
    return alive;
}

void Cells::setAlive(bool alive){
    this->alive = alive;
}
