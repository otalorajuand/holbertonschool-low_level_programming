#include <stdio.h>

/**
 * main - Prints a sentence
 *
 * Return: Always returns 1.
 */
int main(void)
{
static const char hello[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"; 
fwrite(hello, sizeof(hello) - 1, 1, stdout);
return (1); 
}
