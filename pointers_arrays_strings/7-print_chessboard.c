#include "main.h"
#include <unistd.h>
/**
 * print_chessboard - prints the chessboard
 * @a: the 2d array that will represent the board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			char c = a[i][j];

			write(1, &c, 1);
		}
		write(1, "\n", 1);
	}
}
