// ## Subject

// ```
// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------

// Reproduce exactly the behavior of the function strcspn
// (man strcspn).

// The function should be prototyped as follows:

// size_t	ft_strcspn(const char *s, const char *reject);
// ```

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i,j;

    j = 0;
    while(s[j])
    {
        i = 0;
        while(reject[i])
        {
            if (reject[i] == s[j])
                return i;
            i++;
        }
        j++;
    }
    return i;
}

int main()
{
    size_t x = ft_strcspn("he will", "twqrewqewqewqr");
    size_t y = strcspn("he will", "twqrewqewqewqr");
    printf("%ld => Original: %ld\n", x, y);
}