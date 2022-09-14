#include "main.h"
/**
 * main - Entry point
 * Description: prints 'main.h \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "main.h\n";
int i = 0;

while (str[i] != '\0')
       {
       char c = str[i];

       _putchar(c);
       i++;
       }
return (0);
}
