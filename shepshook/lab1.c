#include <stdio.h>
#include <limits.h>

int main() {
	int fib0 = 1;
	int fib1 = 1;
	int fib2;
	int i = 2;
	while (fib1 < UCHAR_MAX) {
		fib2 = fib1 + fib0;
		fib0 = fib1;
		fib1 = fib2;
		i++;
	}
	printf("Maximum number %d: %d\n", i - 2, fib0);

	long long mult = 1;
	fib0 = 1;
	fib1 = 1;
	while (mult < INT_MAX) {
		fib2 = fib1 + fib0;
		mult *= fib2;

		fib0 = fib1;
		fib1 = fib2;
		i++;
	}
	printf("Maximum multiplication: %lld\n", mult / fib2);

	return 0;
}
