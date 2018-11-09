#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,i,j;
    printf("Введите число атлетов\t");
    scanf("%d", &n);
    float a[n][2];
    float ves;
    printf("Введите данные о каждом атлете");
    for(i = 0; i<n; i++)
    {
        printf("%d) ", i+1);
        for (j = 0; j<2; j++)
        {
            scanf("%f", &a[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < (n-1); i++)
    {
         for (int j = (n-1); j>i; j--)
         {
             if (a[j-1][0] > a[j][0])
             {
                 int t = a[j-1][0];
                 a[j-1][0]=a[j][0];
                 a[j][0]=t;
             }
         }
    }
    for(i = 0; i<n; i++)
    {
        for (j = 0; j<2; j++)
        {
            printf("%f\t",a[i][j]);
        }
    printf("\n");
    }
    printf("Тададам БАШНЯ\n ");
    printf("%f  %f\n", a[0][0], a[0][1]);
    ves = a[0][1];
    for (i = 1; i < (n); i++)
    {
        if (a[i][0] >= ves)
        {
            printf("%f  %f\n", a[i][0], a[i][1]);
            ves = ves + a[i][1];
        }

    }
    printf("Вес башни:   %f", ves);
    return 0;
}
