#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
/**
*
*/

void resetBoard(void)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printBoard(void)
{
	printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
	printf("\n");
}

int checkFreeSpaces(void)
{

}

void playerMove(void)
{

}

void computerMove(void)
{

}

char checkWinner(void)
{

}

void printWinner(char winner)
{

}
