#include <stdio.h>

void print_alphabet_x10(void)
{
for (int i = 0; i < 10; i++)
{
for (char c = 'a'; c <= 'z'; c++)
{
printf("%c ", c);
}
printf("\n");
}
}

int main(void)
{
print_alphabet_x10();
return (0);
}
