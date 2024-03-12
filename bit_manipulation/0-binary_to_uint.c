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
	len--;
	while (len != 0)
	{
		printf("%d", len);
		printf("REACHING THE LOOP");
		if (c[len] != '1' && c[len] != '0')
		{
			printf("Reaching null character zone");
			return (0);
		}
		printf("next test");
		if (c[len] == '1')
		{
			printf("test");
			second_changer = changer;
			while (second_changer > 0)
			{
				printf("if or while");
			decimal++;
			second_changer--;
			}
		}
		printf("REACHING END OF LOOP");
		changer = changer * changer;
		len--;
	}
	printf("next test for loop");
	return decimal;
}