// ## Subject

// ```
// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the strspn function 
// (man strspn).

// The function should be prototyped as follows:

// size_t	ft_strspn(const char *s, const char *accept);
// ```
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char  *ft_strchr(const char *s, const char c)
{
    while(*s)
    {
        if (*s == c)
            return (char *)s;
        s++;
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;

    while(s[i])
    {
        if (ft_strchr(accept, s[i]) == 0)
            break;
        i++;
    }
    return i;
}

int main()
{
    size_t x = ft_strspn("home", "hurry");
    size_t y = strspn("home", "hurry");
    printf("%ld = %ld\n", x, y);
}