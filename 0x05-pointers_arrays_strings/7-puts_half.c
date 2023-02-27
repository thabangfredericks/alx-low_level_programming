#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 * Return: void
 */
void puts_half(char *str)
{
int j = 0;
int k;

while (str[j] != '\0')
{
j++;
}

if (j % 2 == 0)
{
k = j / 2;
}
else
{
k = (j - 1) / 2;
}

for (int i = k; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
