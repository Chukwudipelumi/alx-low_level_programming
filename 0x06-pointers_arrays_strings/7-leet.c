#include "main.h"
/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int i, w;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (w = 0; w < 10; w++)
		{
			if (n[i] == s1[w])
			{
				n[i] = s2[w];
			}
		}
	}
	return (n);
}
