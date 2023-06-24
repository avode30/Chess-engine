/*
Board.h
*/
#ifndef BOARD_H
#define BOARD_H

#include "Side.h"
class Piece;

class Board {
  public:
    Board();
     // function overload
    Piece getPiece(int x, char y) const;
    Piece getPiece(int x, int y) const;
    bool placePiece(Piece p, int x, char y);
    bool placePiece(Piece p, int x, int y);

  private:
    int board[8][8];
};

#endif