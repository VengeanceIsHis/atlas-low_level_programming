#include "main.h"
/**
*binary_to_uint - function changes from binary to decimal
*@b: binary input to be changed
*Return: decimal equivalent in unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	const char *c = b;
	unsigned int decimal = 0;
	int len = 0;
	unsigned int changer = 1;

	if (b == NULL)
		return (0);

	while (c[len] != '\0')
	{
		len++;
	}
	len--;
	while (len >= 0)
	{
	if (c[len] == '1')
	{
		decimal += changer;
	}
	else if (c[len] != '1' && c[len] != '0')
	{
		return (0);
	}
	changer *= 2;
	len--;
	}
	return (decimal);
}
