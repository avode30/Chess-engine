/*
Side.h
*/
#ifndef SIDE_H
#define SIDE_H

enum Side { WHITE, BLACK };
const int NSIDES = 2;
 // for the sake of evaluating positions
const int INF = 1000000;
const int NEG_INF = -1000000;

inline
Side opponent(Side s) { return static_cast<Side>(NSIDES - 1 - s); }

#endif