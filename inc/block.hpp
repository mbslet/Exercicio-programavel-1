#ifndef BLOCK_HPP
#define BLOCK_HPP

class Block{
private:
  char Mblock[4][4];
    mblock[0][0] = '-';
    mblock[0][1] = '-';
    mblock[0][2] = '-';
    mblock[0][3] = '-';
    mblock[1][0] = '-';
    mblock[1][1] = '*';
    mblock[1][2] = '*';
    mblock[1][3] = '-';
    mblock[2][0] = '-';
    mblock[2][1] = '*';
    mblock[2][2] = '*';
    mblock[2][3] = '-';
    mblock[3][0] = '-';
    mblock[3][1] = '*';
    mblock[3][2] = '*';
    mblock[3][3] = '-';
public:
    Block();
    ~Block();

    char getMblock();
    void setMblck(int mblock);


};
#endif
