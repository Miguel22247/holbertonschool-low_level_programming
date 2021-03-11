#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
**
 * print_strings - Entry Point
 * @separator: comma space
 * @n: number of elements
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list valist;
        unsigned int i;
        char *str;

        if (separator == NULL)
                return;

        va_star(valist, n);

        for (i = 0; i < n; i++)
        {
                str = va_arg(valist, char *);
                if (str == NULL)
                {
                        str = "(nil)";
                }
                printf("%s", str)
                if (i != (n - 1))
                {
                        printf("%s", separator);
                }
        }
        printf("\n");

        va_end(valist);
}


        