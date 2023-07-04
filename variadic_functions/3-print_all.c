#include "variadic_functions.h"
/**
 * print_c - Print a char argument.
 * @args: va_list containing the argument
 */
void print_c(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_i - Print an int argument.
 * @args: va_list containing the argument
 */
void print_i(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_f - Print a float argument.
 * @args: va_list containing the argument
 */
void print_f(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_s - Print a string argument.
 * @args: va_list containing the argument
 */
void print_s(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)

	str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print arguments based on the format string.
 * @format: Format string specifying the types of arguments
 *            (c: char, i: int, f: float, s: string)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	char *fmt = (char *)format;

	void (*print_func[])(va_list) = {print_c, print_i, print_f, print_s};

	va_start(args, format);

	while (fmt && fmt[i])
	{
		if (fmt[i] == 'c' || fmt[i] == 'i' || fmt[i] == 'f' || fmt[i] == 's')
		{
		printf("%s", separator);
		print_func[(fmt[i] - 'c')](args);
		separator = ", ";
		}
	i++;
	}

	va_end(args);
	printf("\n");
}
