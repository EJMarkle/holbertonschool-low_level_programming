#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: the 2d array that will represent the board
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	char row[] = "12345678";
	char col[] = "abcdefgh";
	int rowcnt;
	int colcnt;

	for (rowcnt = 0; rowcnt < 8; rowcnt++)
	{
		_putchar(row[rowcnt]);

		for (colcnt = 0; colcnt < 8; colcnt++)
		{
			_putchar(a[rowcnt][colcnt]);
			_putchar(' ');
		}
		_putchar('\n');
	}
	_putchar(' ');
	for (colcnt = 0; colcnt < 8; colcnt++)
	{
		_putchar(col[colcnt]);
		_putchar(' ');
	}
	_putchar('\n');
}
