#include "main.h"

/**
 * islower - Checks for lower character
 * c: The character to be checked
 * Return: 1 for lowercase character pr 0 for anything else
 */

int _islower(int c)

{
if (c >= 97 && c <= 122)
{
return(1);
}
return (0);
}
