#pragma once
#include<stdio.h>
#include<windows.h>
#include<time.h>
#include<stdlib.h>

//Tic Tac Toe menu
void menu();

//Convenient to change
#define ROW 3
#define COL 3

//Create Board
void Create_Board(char board[ROW][COL], int row, int col);

//Display Broad
void Display_Board(char board[ROW][COL], int row, int col);

//Player Move
void Player(char board[ROW][COL], int row, int col);

//Computer Move
void Computer(char board[ROW][COL], int row, int col);

//player victory return '0' 
//computer victory return '#' 
//draw(平局) return 'D' 
//continue return 'C'
//Return type : char
char Is_Vic(char board[ROW][COL], int row,int col);

//Tic Tac Toe Function
void game_3T();
