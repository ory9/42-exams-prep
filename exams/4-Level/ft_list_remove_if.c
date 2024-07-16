#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (*begin_list == NULL || begin_list == NULL)
        return ;
    t_list *tem = *begin_list;
    
    if (cmp(tem->data, data_ref) == 0)
    {
        *begin_list = tem->next;
        free(tem);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        tem = *begin_list;
        ft_list_remove_if(&tem->next, data_ref, cmp);
    }
}
