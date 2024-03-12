#include "main.h"
/**
*
*/
unsigned int binary_to_uint(const char *b)
{
	const char *c = b;
	unsigned int i, decimal = 0;
	unsigned int len = 0;
	unsigned int changer = 1, second_changer;

	if (b == NULL)
		return (0);

 while (c[len] != '\0')
	{
		printf("length okay?");
  len++;
	}
	i = len;
	while (b[i] != '\0')
	{
		printf("if or while");
		if (b[i] != '0' && b[i] != '1')
		{
			printf("test");
			return (0);
		}
		if (b[i] == '1')
		{
			printf("test");
			second_changer = changer;
			while (second_changer > 0)
			{
			decimal = decimal + 1;
			second_changer--;
			}

		}
		changer = changer * changer;
		i--;
	}
	printf("not going thru test");
	return decimal;
}