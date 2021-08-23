#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int len;
    int *ptr;
    int i;
    int j;

    j = 0;
    i = min;
    if(min >= max) 
        return (0);

    len = max - min;
    ptr = (int  *)malloc(sizeof(int) * (max - min));
    *range = ptr;
    if (ptr == NULL)
        return (0);
    while (i < max)
    {
        ptr[j] = i;
        i++;
        j++;
   }
    return (len);
}

int main()
{
    int min;
    int max;
    int *range;
    int i;

    i = 0;
    min = 4;
    max = 10;
    printf("%d\n",ft_ultimate_range(&range, min, max));// **& == *
    while (min < max)
    {
        printf("%d",range[i]);
        min ++;
        i++;
    }
}
