#include "main.h"
/**
 *_strcat - a function that is able to concatenates 2 strings.
 *@dest: string concatenation
 *@src: string to be concatenated
 *Return: a pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int lengthD, lengthS;

	lengthD = 0;

	lengthS = 0;

	while (*(dest + lengthD) != '\0')

	lengthD++;

	while (*(src + lengthS) != '\0' && lengthD < 97)

	{

	*(dest + lengthD) = *(src + lengthS);

	lengthD++;

	lengthS++;

	}

	*(dest + lengthD) = '\0';

	return (dest);
}
