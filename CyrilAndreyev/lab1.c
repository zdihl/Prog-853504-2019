/* Variant 1 */

#include <stdio.h>

int main() 
{
	long long int x;
	printf("x = ");
	scanf("%lli", &x);
	if ((x < 100) || (x > 9999)) {
		printf("Invalid input!\n");
		return 0;
	}
	if (x > 999) {
		short int sum = 0;
		while (x) {
			sum += x % 10;
			x /= 10;
		}
		printf("%hi\n", sum);
	}
	else {
		short int pr = 1;
		while (x) {
			pr *= x % 10;
			x /= 10;
		}
		printf("%hi\n", pr);
	}
	return 0;
}
