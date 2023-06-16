#include "main.h"
/**
 * main - prints all arguments it recieves
 * @argc: number of arguments
 * @argv: argument array
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int inter;

	for (inter = 0; inter < argc; inter++)
	{
		printf("%s\n", argv[inter]);
	}
	return (0);
}
