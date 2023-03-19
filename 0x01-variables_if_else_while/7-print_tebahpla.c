#include<stdio.h>
/**
 * main -prints the lower
 * followed by a new line
 * Return: 0 (success)
 */
int main(void)
{
    char ch;
    for (ch = 'Z'; ch >= 'a' ; ch--)
    {
       putchar(ch);
    }
    putchar('\n');
    return (0);
}
