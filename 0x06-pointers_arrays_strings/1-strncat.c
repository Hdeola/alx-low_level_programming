#include "main.h"

/**
 *_strncat - concatenates the string pointed to by @src to
 * the end of the stringnpointed to by @dest
 * @dest: string that will be appended
 * @src: string to be concentrated upon
 *
 * Return: returns pointer to @dest
 * /

char *_strncat(char *dest,char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++
		dest[dest_len++] = src[index];

	return (dest);
}
