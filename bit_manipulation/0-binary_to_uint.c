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
		if (!c[len])
		{
			printf("Reaching null character zone");
			return (0);
		}
		if (c[len] == '1')
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
	return decimal;
}