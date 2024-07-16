#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int num = atoi(av[1]);
        int i = 1;
        if (num == 1)
            printf("1");
        while (num >= i++)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                if (num == i)
                    break;
                printf("*");
                num /= i;
                i = 1;
            }
        }
        printf("\n");
    }
    else
        write(1, "\n", 1);
}

// $> ./fprime 225225 | cat -e
// 3*3*5*5*7*11*13$
// $> ./fprime 8333325 | cat -e
// 3*3*5*5*7*11*13*37$
// $> ./fprime 9539 | cat -e
// 9539$
// $> ./fprime 804577 | cat -e
// 804577$
// $> ./fprime 42 | cat -e
// 2*3*7$
// $> ./fprime 1 | cat -e
// 1$
// $> ./fprime | cat -e
// $
// $> ./fprime 42 21 | cat -e
// $