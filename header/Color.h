#ifndef COLOR_H
#define COLOR_H
#include <limits.h>

const int NROWS = 8;
const int NCOLS = 8;
const int INF = INT_MAX;
const int NEG_INF = INT_MIN + 1;

enum Color { WHITE, BLACK };

enum Piece { EMPTY,   wP, wN, wB, wR, wQ, wK,   bP, bN, bB, bR, bQ, bK };
enum File {FILE_A, FILE_B, FILE_C, FILE_D, FILE_E, FILE_F, FILE_G, FILE_H, FILE_NONE};
enum Rank {RANK_1, RANK_2, RANK_3, RANK_4, RANK_5, RANK_6, RANK_7, RANK_8, RANK_NONE};

enum Square {
  A1 = 21, B1, C1, D1, E1, F1, G1, H1,
  A2 = 31, B2, C2, D2, E2, F2, G2, H2,
  A3 = 41, B3, C3, D3, E3, F3, G3, H3,
  A4 = 51, B4, C4, D4, E4, F4, G4, H4,
  A5 = 61, B5, C5, D5, E5, F5, G5, H5,
  A6 = 71, B6, C6, D6, E6, F6, G6, H6,
  A7 = 81, B7, C7, D7, E7, F7, G7, H7,
  A8 = 91, B8, C8, D8, E8, F8, G8, H8, NO_SQ = 99
};

inline
Color opponent(Color c) { return Color(1 - c); }
















#include <chrono>
class Timer {
  public:
    Timer() { start(); }
    void start() { m_time = std::chrono::high_resolution_clock::now(); }
    double elapsed() const {
        std::chrono::duration<double, std::milli> diff = std::chrono::high_resolution_clock::now() - m_time;
        return diff.count();
    }
    
  private:
    std::chrono::high_resolution_clock::time_point m_time;
};

class JumpyTimer {
  public:
    JumpyTimer(int jumpInterval)
     : m_jumpInterval(jumpInterval), m_callsMade(0) { actualElapsed(); }
    double elapsed() {
        m_callsMade++;
        if (m_callsMade == m_jumpInterval) {
            m_lastElapsed = m_timer.elapsed();
            m_callsMade = 0;
        }
        return m_lastElapsed;
    }
    double actualElapsed() {
        m_lastElapsed = m_timer.elapsed();
        return m_lastElapsed;
    }
    
  private:
    Timer m_timer;
    int m_jumpInterval;
    int m_callsMade;
    int m_lastElapsed;
};

#endif