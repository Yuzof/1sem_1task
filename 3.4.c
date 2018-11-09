#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int n)
{
    int c,i;
    c = 1;
    for(i = 1; i <= n; i++)
        c=c*i;
    return c;
}
int main()
{
    int n,i;
    float k;
    printf("Введите степень бинома\t");
    scanf("%d", &n);
    printf("1 + " );
    for (i = 1; i < n; i++)
    {
        k = fact(n)/(fact(n-i)*fact(i));
        printf("%fx^%d + ", k, i);
    }
    printf("%dx^%d", 1, n);
    return 0;
}
