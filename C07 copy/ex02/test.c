#include <stdio.h>

int main()
{
    int a = 5;
    int *a1;
    int **a2;

    a1 = &a;
    a2 = &a1;
    printf("%d\n", **a2);

 /////////////////////////////////

   
 /////////////////////////////

    char *b = "Hello Wolrd";
    char **b1;

    b1 = &b;
    printf("%s\n", *b1);
    printf("%c\n", b1[0][5]);//b1[0][0] = H;

} 