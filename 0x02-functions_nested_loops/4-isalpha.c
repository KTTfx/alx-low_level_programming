#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * c: The chacter to be checked 
 * Return: 1 for alphanumeric character or 0 for anything else
 */

int _isalpha(int c)
{

if ((c >= 65 && c<=97) || (c>= 97 && c<= 122))
{
return (1);
}
return (0);
}

