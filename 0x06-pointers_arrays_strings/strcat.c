#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: a string.
 */
char *_strcat(char *dest, char *src)
{
        strcat(dest, src);
        return (dest);
}
