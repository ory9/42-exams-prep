#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *tem;

    tem = lst;
    int swap;

    while(lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tem;
        }
        else
            lst = lst->next;
    }
    lst = tem;
    return lst;
}
