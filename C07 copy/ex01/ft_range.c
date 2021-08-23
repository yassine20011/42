#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max)
{
    int len;
    int *ptr;
    int i;
    int t;

    if(min >= max) return (0);

    len = max - min;
    ptr = (int*)malloc(len * sizeof(int));
    t = max - min;

    i = 0;
    int sv;
    sv = min;
    while (i < max)
    {
        ptr[i] = sv;
        i++;
        sv++;
   }
    return ptr;
}

int main()
{
    int i;
    int min =  9;
    int max =  99;
    int len = max - min;
    int *ptr = ft_range(min, max);

    i = 0;
    while (i < len)
    {
        printf("%d", ptr[i]);
        printf("%c", '-');
        //printf("%c", '\n');
        i++;
    }
}