#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strncpy(char *s1, char *s2, int n)
{
    int i = 0;

    while(s2[i] && i < n)
    {
        s1[i] = s2[i];
        i++;
    }
    while(s1[i])
    {
        s1[i] = '\0';
        i++;
    }
    return (s1);
}

char    **ft_split(char *str)
{
    int i, k, j, count;
    char **token;

    count = 0;
    k = 0;
    i = 0;
    
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            count++;
        while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
    }
    token = (char **)malloc(sizeof(char *) * (count + 1));
    if (!token)
        return NULL;
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            i++;
        if (i > j)
        {
            token[k] = (char *)malloc(sizeof(char) * (i - j));
            ft_strncpy(token[k++], &str[j], i - j);   
        }
    }
    token[k] = NULL;
    return (token);
}

// int main(void)
// {
//     int i = 0;
//     char **splitted = ft_split("hello tunes for Gulu            today\
//     and tomorrow.");
//     while(splitted[i] != NULL)
//     {
//         printf("%s\n", splitted[i]);
//         free(splitted[i]);
//         i++;
//     }
//     free(splitted);
// }