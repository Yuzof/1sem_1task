#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int mark, k,n,m,ludi,o,i,j;
    printf("Введите число людей\t");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++) a[i]=1;
    printf("Введите число слов в считалочке\t");
    scanf ("%d", &m);
    ludi = n;
    mark = 0;
    while (ludi > 0)
    {
        for(i = 0; i < n; i++)
        {
            if(a[i] == 1) mark++;
            if (mark == m)
            {
                a[i] =0;
                mark = 0;
                ludi = ludi -1;
                printf("%d ", i);
            }
        }
    }


    return 0;
}
