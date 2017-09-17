#ifndef BLINKER_HPP
#define BLINKER_HPP
#include "cells.hpp"

class Blinker{

private:
    Cells Mblinker [3][3];

public:
  Blinker();
  Blinker(Cells mblinker[3][3]);

  Cells getMblinker();
  void setMblinker(Cells mblinker[3][3]);

  };
#endif
