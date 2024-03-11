#include "main.h"
/**
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, bn = 0;
	unsigned int len = string_length(b) - 1;
	unsigned int changer = 1;

	if (b == NULL)
		return (0);
	i = len;
	while (b[i] > 0)
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		if (b[i] == 1)
		{
		bn = changer;
		changer = changer * changer;
		i--;
		}
		else
			continue;
	}
	return bn;
}
int string_length(const char *str)
{
	int length = 0;

 while (str[length] != '\0')
	{
  length++;
 }

 return length;
}