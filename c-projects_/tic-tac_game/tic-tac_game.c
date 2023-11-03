#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
#include "main.h"
/**
* main - tic tac game
*
*
*/

char board[3][3];
const char PLAYER = 'X';
const char COMPUTER = 'O';

int main(void)
{
	char winnner = ' ';
	
	resetBoard();
	while (winner == ' ' && checkFreeSpaces() != 0)
	{
		printBoard();
	}


	return (0);
}
