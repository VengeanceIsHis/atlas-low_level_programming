#include "main.h"
/**
*
*/
int string_length(const char *str);
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, bn = 0;
	unsigned int len = 0;
	unsigned int changer = 1;

	if (b == NULL)
		return (0);

	i = len;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
		bn = bn + changer;
		}
		changer = changer * changer;
		i--;
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