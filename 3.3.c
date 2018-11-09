#include <stdio.h>

int fib(int n)
{
	int sum;
	if ((n == 1) || (n == 2)) return 1;
	sum = fib(n-2) + fib(n-1);
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}
