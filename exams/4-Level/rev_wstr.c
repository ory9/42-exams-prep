#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void rev_wstr(char *s)
{
    int fs, i, e, fg;
    i = 0;
    while(s[i])
        i++;
    while(i >= 0)
    {
        while(s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
            i--;
        e = i;
        while(s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
            i--;
        fs = i + 1;
        fg = fs;
        while(fs <= e)
        {
            write(1, &s[fs], 1);
            fs++;
        }
        if (fg != 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        rev_wstr(av[1]);
    }
    write(1, "\n", 1);
}