#include "main.h"
/**
*
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, bn = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1' && b[i] != '/0')
	{
		if (b[i] != '0' || b[i] != '1')
		{
			return (0);
		}
		bn <<= 1;
		bn += b[i]-'0';
		i++;
	}
	return bn;
}