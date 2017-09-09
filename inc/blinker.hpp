#ifndef BLINKER_HPP
#define BLINKER_HPP

class Blinker{
  char Mblinker [5][5];
private:
    Mblinker[0][0] = '-';
    Mblinker[0][1] = '-';
    Mb;linker[0][2] = '-';
    Mblinker[0][3] = '-';
    Mblinker[0][4] = '-';
    mBlinker[1][0] = '-';
    Mblinker[1][1] = '-';
    Mblinker[1][2] = '*';
    Mblinker[1][3] = '-';
    Mblinker[1][4] = '-';
    Mblinker[2][0] = '-';
    Mblinker[2][1] = '-';
    Mblinker[2][2] = '*';
    Mblinker[2][3] = '-';
    Mblinker[2][4] = '-';
    Mblinker[3][0] = '-';
    Mblinker[3][1] = '-';
    Mblinker[3][2] = '*';
    Mblinker[3][3] = '-';
    Mblinker[3][4] = '-';
    Mblinker[4][0] = '-';
    Mblinker[4][1] = '-';
    Mblinker[4][2] = '-';
    Mblinker[4][3] = '-';
    Mblinker[4][4] = '-';

public:
  Mblinker();
  ~Mblinker();

  char getMblinker();
  void setMblinker(char mblinker);
};
#endif
