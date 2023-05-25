#include <stdio.h>
/**
 * main - prints every character of the alphabet reversed
 * Return: 0
 */
int main(void)
{
	char l;

	for
		(l = 'z';
		l >= 'a';
		--l)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
