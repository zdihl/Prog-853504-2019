#include <stdio.h>
#pragma hdrstop

#include <tchar.h>

#pragma argsused


int main(int argc, _TCHAR* argv[])
{
	int Ostatok, k,  numeral;
	scanf("%d", &k);
	if (k == 0 || k > 179)
	{
		printf("Error");
		getch();
		return 0;
	}
	Ostatok = k % 2;
	if (!Ostatok)       //если четный столбец
	{
	 numeral = k / 20 + 1;
	}
	else              //если нетный столбец
	{
		numeral = (k % 20) / 2;
	}
	printf("%d", numeral);
	getch();
	return 0;
}



