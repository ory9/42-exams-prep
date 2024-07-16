#include <unistd.h>

void print_to_screen(char *s, char *e)
{
    while(s < e)
    {
        write(1, s, 1);
        s++;
    }
}

void rostring(char *s)
{
    char *e, *fs;

    while(*s && (*s ==' ' || *s == '\t'))
        s++;
    fs = s;
    while(*s && *s !=' ' && *s != '\t')
        s++;
    e = s;
    while(*s && (*s ==' ' || *s == '\t'))
        s++;
    if(*s)
    {
        while(*s)
        {
            if (*s == ' ' || *s == '\t')
            {
                while(*s == ' ' || *s == '\t')
                    s++;
                if (*s)
                    write(1, " ", 1);
            }
            else
                write(1, s++, 1);
        }
        write(1, " ", 1);
    }
    print_to_screen(fs, e);
}

int main(int ac, char **av)
{
    if (ac > 1)
    {
        rostring(av[1]);
    }
    write(1, "\n", 1);
}