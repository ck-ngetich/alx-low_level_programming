#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - a fuction to converts binary to int
 * @b: is the pointing character string of the binary
 * Return: converted number or 0 otherwise.
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int num, raise;
        int size;

        if (b == NULL)
                return (0);

        for (size = 0; b[size]; size++)
        {
                if (b[size] != '0' && b[size] != '1')
                        return (0);
        }

        for (raise = 1, num = 0, size--; size >= 0; size--, raise *= 2)
        {
                if (b[size] == '1')
                        size += raise;
        }

        return (num);
}
