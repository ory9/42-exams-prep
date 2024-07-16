// ## Subject

// ```
// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// --------------------------------------------------------------------------------

// Write a function that reverses (in-place) a string.

// It must return its parameter.

// Your function must be declared as follows:

// char    *ft_strrev(char *str);

// ```

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char    *ft_strrev(char *str)
{
    int l, j;
    char c;

    j = 0;
    while(str[l] != '\0')
        l++;
    while(j < l / 2)
    {
        c = str[j];
        str[j] = str[l - 1 - j];
        str[l - 1 - j] = c;
        j++;
    }
    return str;
}
