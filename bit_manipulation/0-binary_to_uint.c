#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0s and 1s
 * Return: the converted number, or 0 if not just 0s and 1s or b is null
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int i;

	/* if b is null, return 0 */
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		/* if b is neither 0 nor 1, return 0 */
		if (b[i] != '0' && b[i] != '1')
			return (0);
		/* left-shifting converted and adding the current bit, */
	/* the binary string is converted to its corresponding decimal */
		converted = (converted << 1) + (b[i] - '0');
	}
	return (converted);
}
