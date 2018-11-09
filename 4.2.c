#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,j,t,x,max,kef,kolvo,maxp;
    printf("Введите кол-во отрезков\n");
    scanf("%d", &n);
    int a[n][2];
     for(i = 0; i<n; i++)
    {
        printf("%d) ", i+1);
        for (j = 0; j<2; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < (n-1); i++)
    {
         for (int j = (n-1); j>i; j--)
         {
            if (a[j-1][0] > a[j][0])
             {
                t = a[j-1][0];
                a[j-1][0]=a[j][0];
                a[j][0]=t;
                t = a[j-1][1];
                a[j-1][1]=a[j][1];
                a[j][1]=t;

             }
         }
    }
    for(i = 0; i<n; i++)
    {
        for (j = 0; j<2; j++)
        {
            printf("%d\t",a[i][j]);
        }
    printf("\n");
    }

    x = 0;
    max = 0;
    kolvo = 0;
    for (i=0; i<n; i++)
    {
        for (j = 0; j < n; j++ )
        {
            if (a[j][0] <= x)
            {
                if (a[j][1] > max)
                {
                maxp = max;
                max = a[j][1];
                kef = j;
                kolvo = kolvo +1;
                }
            }
        }
        x = a[kef][1];
        if (max > maxp)
        {
        printf("(%d %d) ", a[kef][0], a[kef][1]);
        maxp = max;
        }
    }
    printf("Колличество уникальных отрезков: %d", kolvo);
    return 0;
}
