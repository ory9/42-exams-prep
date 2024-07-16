#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int tem;
    int size;
    char *arr;

    size = 0;
    if (nbr == -2147483648)
        return ("-214748348\0");
    if (nbr <= 0)
        size++;
    tem = nbr;
    while(tem)
    {
        size++;
        tem /= 10;
    }
    arr = (char *)malloc(sizeof(char) * size);
    if (!arr)
        return NULL;
    if (nbr == 0)
    {
        arr[0] = '0';
        return (arr);
    }
    if (nbr < 0)
    {
        arr[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        arr[--size] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (arr);
}

// int main()
// {
//     char *s = ft_itoa(2147483647);
//     printf("%s\n", s);
// }