#include "Side.h"
#include "Board.h"

 // CREATE PIECE OBJECTS
Board::Board() {
    //Piece white_pawn(8);
    //Piece white_knight(2);
    //Piece white_bishop(2);
    //Piece white_rook(2);
    //Piece white_queen;
    //Piece white_king;

    //Piece black_pawn(8);
    //Piece black_knight(2);
    //Piece black_bishop(2);
    //Piece black_rook(2);
    //Piece black_queen;
    //Piece black_king;

    for (int i = 0; i < NCOLS; ++i) {
        //Piece white_pawn;
        placePiece(white_pawn, 2, i);
    }
}