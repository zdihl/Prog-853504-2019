#include <stdio.h>
#include <conio.h>
#include <limits.h>

int main()
{
	int prevnum, num, sum, counter, mem;
	prevnum=1;
	num=1;
	counter=2;
	sum=2;
	while ((unsigned long)prevnum+num<=INT_MAX) {
		mem=num;
		num+=prevnum;
		prevnum=mem;
		counter++;
		if ((unsigned long)sum+num<=INT_MAX) {
			sum+=num;
		}
	}
	printf("Nomer poslednego chisla: %d %s",counter,"\n");
	printf("Poslednee chislo: %d %s",num,"\n");
        printf("Summa chisel: %d",sum,"\n");
	getch();
	return 0;
}
