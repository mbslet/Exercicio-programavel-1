#include <iostream>
#include "matrix.hpp"
#include "cells.hpp"
#include "block.hpp"
#include"blinker.hpp"
#include"glider.hpp"
#include"gosperglidergun.hpp"
#include <time.h>

using namespace std;
int  menu(){
  int option;
  cout << "Escolha uma opção:\n0-Executar\n1- Colocar um Block\n2- Colocar um Blinker\n3- Colocar um Glider\n4- Colocar a Gosper Glider Gun\n";
  cin >> option;
  return option;
}

void sleep(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

int main(int argc, char ** argv){
  int option, i, j;
  int iteracoes;
  Matrix * mat1 = new Matrix();//deletar isso
  Block * bGenerator = new Block();//deletar isso
  Blinker * bliGenerator = new Blinker();//deletar isso
  Glider * gliGenerator = new Glider();//deletar isso SERIO LETICIA NÃO ESQUECE!
  GosperGliderGun * gggGenerator = new GosperGliderGun(); // isso também
  do{
    cout << "Matriz atual:\n";
    mat1->printGrid();
    option = menu();
    if(option!=0){
      cout << "Insira as coordenadas x e y: ";
      cin >> i >> j;
    }
    switch(option){
      case 1:{
        mat1->setGrid(bGenerator->formABlock(mat1->getGrid(), i,j));
        break;
      }
      case 2:{
        mat1->setGrid(bliGenerator->formABlinker(mat1->getGrid(), i, j));
        break;
      }
      case 3:{
        mat1->setGrid(gliGenerator->formAGlider(mat1->getGrid(), i, j));
        break;
      }
      case 4:{
        mat1->setGrid(gggGenerator->formAGGG(mat1->getGrid(), i, j));
        break;
      }
      case 0:{
        cout << "Insira o número de iterações: ";
        cin >> iteracoes;
        break;
      }
      default: {
        cout << "Caso inválido\n";
      }
    }
  }
  while(option != 0);
  for(int i = 0; i < iteracoes; i++){
      mat1->printGrid();
      mat1->checkRules();
      sleep(50000);
  }
  delete(mat1);
  delete(bliGenerator);
  delete(bGenerator);
  delete(gliGenerator);
  delete(gggGenerator);
  return 0;
}
