#include<stdio.h>
#include<stdlib.h>

char *ft_strdup(char *src)
{
    int i;
    char *p;

    i = 0;
    while (src[i])
        i++;
    p = (char*)malloc(i + 1 * sizeof(char));
    
    i = 0;
    while (src[i])
    {
        p[i] = src[i];
        i++;
    }
    p[i] = '\0';
    return p;
}

int main()
{
    printf("%s",ft_strdup("Yassine Amjad"));
}
