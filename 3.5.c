#include <stdio.h>
#include <math.h>
int main()
{
	int i,ind = 0, n,k;
	float r;
	scanf("%d", &n);
	r = sqrt(n);
	k = (r/1) + 1;
	for (i = 2; i<=k; i++)
		if (n%i == 0) ind = 1;
	if((ind == 0) || (n == 2)) printf("Число %d простое", n);
	else printf("Число %d не простое", n);
	return 0;
}
