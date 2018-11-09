#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i,k,l,c,s,q,w;
    int a[4],b[4],g[4];
    for (i = 0; i<4; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (i = 0; i < 4; i++) printf("%d %d\n", a[i], b[i]);
    for (i = 1; i < 4; i++)
    {
        q = a[0] - a[i];
        w = b[i] - b[0];
        g[i-1] = sqrt(q*q + w*w);
    }
    k = g[0];
    l = g[1];
    c = g[2];

    printf("%d\t%d\t%d\t", k, l, c);
    if ((k < c) || (k <= l)) s = k*l;
    if ((c < k) || (c <= l)) s = c*l; else s = c*k;
    printf ("S=%d\n", s);
    return 0;
}
