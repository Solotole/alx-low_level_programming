#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i); /*no increment line after this statement to ensure that the while condition is not satisfied for ensuring a finite loop*/
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
