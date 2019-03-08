/* Variant 1 */

#pragma hdrstop
#pragma argsused

#include <stdio.h>

#ifdef _WIN32
#include <tchar.h>
#else
  typedef char _TCHAR;
  #define _tmain main
#endif

int _tmain(int argc, _TCHAR* argv[]) 
{
	long long int x;
	printf("x = ");
	scanf_s("%lli", &x);
	if ((x < 100) || (x > 9999)) {
		printf("Invalid input!");
		return 0;
	}
	if (x / 1000) {
		short int sum = 0;
		while (x) {
			sum += x % 10;
			x /= 10;
		}
		printf("%hi", sum);
	}
	else {
		short int pr = 1;
		while (x) {
			pr *= x % 10;
			x /= 10;
		}
		printf("%hi", pr);
	}
	return 0;
}
