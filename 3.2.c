#include <stdio.h>
int main()
{
	int n, a = 1, b = 1;
	scanf("%d", &n);
	for ( int i = 2; i < n;)
	{
		i = i+2;
		a = a + b;
		b = b + a;
	}
	if (n%2 == 0) printf("%d\n", b); else printf("%d\n", a);
	return 0;
}
