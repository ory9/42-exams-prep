#include <unistd.h>
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int tem;

    while(i < size - 1)
    {
        if (tab[i] > tab[i + 1])
        {
            tem = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = tem;
            i = 0;
        }
        else      
            i++;
    }
}

// int main()
// {
//     int arr[] = {240304, 23, 56, 4, 2, 14, 0};
//     int len = 6;
//     sort_int_tab(arr, len);
//     int i = 0;
//     while(i < len)
//     {    printf("%d\n", arr[i]);
//         i++;}
// }