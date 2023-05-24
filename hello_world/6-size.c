#include <stdio.h>
/**
 * main - prints the size of various types
 * Return: nill
 */
int main(void)
{
	printf("Size of a char: %zu\n byte(s)", sizeof(char));
	printf("Size of an int: %zu\n byte(s)", sizeof(int));
	printf("Size of a long int: %zu\n byte(s)", sizeof(long));
	printf("Size of a long long int: %zu\n byte(s)", sizeof(long long));
	printf("Size of a float: %zu\n byte(s)", sizeof(float));
	return (0);
}
