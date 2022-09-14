#include "_putchar.c"
/**
 * main - Entry point
 * Description: prints '_putchar.c \n'
 * Return: Always 0 (success)
 */
int main(void)
{
char str[] = "_putchar.c\n";
int i = 0;

while (str[i] != '\0')
       {
       char c = str[i];

       _putchar(c);
       i++;
       }
return (0);
}
