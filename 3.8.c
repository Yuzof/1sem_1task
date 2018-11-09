#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long double a,b,c;
    long double x;
    int i;
    printf("Введите целочисленный интервал корня");
    scanf("%Lf %Lf", &a, &b);
    for (i = 0; i < 40; i++)
    {
        c = (a+b)/2;
        if (tan(c) > 0)
        {
            if ((tan(c) - c) > 0)
                b = c;
            else
                a = c;
        }
        else
        {
        if ((tan(c) - c) < 0)
            b = c;
        else
            a = c;
        }
    }
    printf(" Корень уравнения tg(x)=x на заданном интервале: %20.10Lf", c);
    return 0;
}
