#include "main.h"
/**
*
*/
unsigned int binary_to_uint(const char *b)
{
	const char *c = b;
	unsigned int decimal = 0;
	unsigned int len = 0;
	unsigned int changer = 1, second_changer;

	if (b == NULL)
		return (0);

 while (c[len] != '\0')
	{
  len++;
	}
	while (len != 0)
	{
		printf("%s", b[len]);
		printf("if or while");
		if (b[len] != 0 && b[len] != 0)
		{
			return (0);
		}
		if (b[len] == 1)
		{
			printf("test");
			second_changer = changer;
			while (second_changer > 0)
			{
			decimal++;
			second_changer--;
			}

		}
		changer = changer * changer;
		len--;
	}
	printf("not going thru test");
	return decimal;
}