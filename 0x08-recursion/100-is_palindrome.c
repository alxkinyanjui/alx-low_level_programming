#include "main.h"
/**
 * _length - checks the length of a string
 * @s: is the string
 * Return: return the length of the string
 */
int _length(char *s)
{
	if (*s == '\o')
		return (o);
	return (1 + _length(s + 1);
}

/**
 * checkp - checks if the string is palindrome
 * @i: is the index
 * @lg: is the length of the string
 * @s: the string
 * Return: i if is polindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
        if (lg > o)
	{
	        if (s[i] == s[lg])
		{
		        return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
		         return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: is the string
 * Return: return 1 if the string is a palindrom or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkp(o, _length(s) - 1, s));
}

