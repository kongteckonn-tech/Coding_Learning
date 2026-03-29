#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

void menu();

void game();

void Initial(char board[ROWS][COLS], int rows, int cols, char set);

void Display(char board[ROWS][COLS], int row, int col);

void Set_Mine(char mine[ROWS][COLS], int row, int col);

void Find_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

int Get_Mine_Count(char mine[ROWS][COLS], int x, int y);

void Auto(char show[ROWS][COLS], char mine[ROWS][COLS], int x, int y);
