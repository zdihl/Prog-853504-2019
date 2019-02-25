//variant 31

#include <stdio.h>
#include <limits.h>

int main() {
	int fib[100];
	fib[0] = 1;
	fib[1] = 1;
	int i = 2;
	while (fib[i - 1] < UCHAR_MAX) {
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
	printf("Maximum number %d: %d\n", i - 2, fib[i - 2]);

	long long mult = 1;
	i = 2;
	while (mult < INT_MAX) {
		fib[i] = fib[i - 1] + fib[i - 2];
		
		mult *= fib[i];
		i++;
	}
	printf("Maximum multiplication: %lld\n", mult / fib[i - 1]);

	getch();
	return 0;
}
