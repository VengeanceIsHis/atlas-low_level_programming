#include "main.h"
/**
*
*/
unsigned int binary_to_uint(const char *b)
{
	const char *c = b;
	unsigned int decimal = 0;
	int len = 0;
	unsigned int changer = 1, second_changer;

	if (b == NULL)
		return (0);

 while (c[len] != '\0')
	{
  len++;
	}
	while (len >= 0)
	{
 if (c[len] == '1')
	{
 	decimal += changer;
 }
 changer *= 2;
 len--;
 }
	printf("next test for loop");
	return decimal;
}