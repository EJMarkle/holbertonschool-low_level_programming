#include <stdio.h>
/**
 * main - prints all single digits in base 10 starting from 0
 * Return: 0
 */
int main(void)
{
	int n;

	for
		(n = 0;
		n <= 9;
		++n)
	{
		putchar(n + '0');
	}
	putchar('\n');
	return (0);
}