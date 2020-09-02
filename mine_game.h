#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define ROW 9    //扫雷的信息的行
#define COL 9    //扫雷的信息的列
#define ROWS ROW+2   //存放雷的信息的行
#define COLS COL+2   //存放雷的信息的列
#define EASY_COUNT 10
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);
void SetMine(char board[ROWS][COLS], int rows, int cols);
void FindMine(char board[ROWS][COLS], char board2[ROWS][COLS], int row, int col);
