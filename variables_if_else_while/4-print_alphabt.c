#include <stdio.h>
/**
 * main - print alphbt in lowercase then new line
 * Return: 0
 */
int main(void)
{
	char l;

	for
		(l = 'a';
		 l <= 'z';
		 ++l)
	{
		if (l != 'q' && l != 'e')
		{
			putchar(l);
		}
	}
	putchar('\n');
	return (0);
}
