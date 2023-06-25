/*
Board.h
*/
#ifndef BOARD_H
#define BOARD_H

#include "Color.h"
class Piece;

class Board {
  public:
    Board();
     // function overload

  private:
    int board[12][10];
};

#endif