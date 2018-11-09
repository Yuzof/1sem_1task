#include <stdio.h>
int main()
{
	int n,i;
	float a,max;
	scanf("%d", &n);
	if ( n > 0)
	{
	 scanf("%f", &max);
	for (i = 1; i < n; i++)
	{
		scanf("%f", &a);
		if (a > max) max = a;
	}	
	printf("Наибольше число множества: %f", max);
	printf("\n");
	} else printf("Некорректное условие\n");
	return 0;
}
