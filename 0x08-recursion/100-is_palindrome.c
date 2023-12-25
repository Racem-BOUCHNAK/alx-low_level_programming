#include "main.h"
/**
*is_palindrome - entry point of the code
*@s:var
* Return: Always 0 (Success)
*/
int is_palindrome(char *s)
{
int len = _strlen(s);
return (_palindrome(s, len - 1));
}
/**
 *_strlen - entry point of the code
*@s:var
* Return: Always 0 (Success)
*/
int _strlen(char *s)
{
if (!*s)
{
return (0);
}
return (1 + _strlen(++s));
}
/**
*_palindrome - entry point of the code
*@s:var
*@i:var
* Return: 1 or 0 (Success)
*/
int _palindrome(char *s, int i)
{
if (i < 1)
{
return (1);
}
if (*s == *(s + i))
{
return (_palindrome(s + 1, i - 2));
}
return (0);
}
