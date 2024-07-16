// ## Subject

// ```
// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).

// Your function must be declared as follows:

// char    *ft_strdup(char *src);
// ```

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int ft_strlen(char *s)
{
    int i = 0;

    while(s[i])
        i++;
    return i;
}

char    *ft_strdup(char *src)
{
    int i = 0;
    char *m;

    m = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
    if (!m)
        return 0;
    while(src[i])
    {
        m[i] = src[i];
        i++;
    }
    m[i] = '\0';
    return m;
}
