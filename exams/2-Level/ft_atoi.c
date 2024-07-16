// ## Subject

// ```
// Assignment name  : ft_atoi
// Expected files   : ft_atoi.c
// Allowed functions: None
// --------------------------------------------------------------------------------

// Write a function that converts the string argument str to an integer (type int)
// and returns it.

// It works much like the standard atoi(const char *str) function, see the man.

// Your function must be declared as follows:

// int	ft_atoi(const char *str);
// ```

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int r = 0;
    int s = 1;

    while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
        s = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return (r * s);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int x = ft_atoi(av[1]);
        printf("%d\n", x);
    }
}