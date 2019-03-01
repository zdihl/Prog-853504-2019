#include <stdio.h>
#pragma hdrstop

#include <tchar.h>


#pragma argsused

int Сheck();

int _tmain(int argc, _TCHAR* argv[])
{
	int Ostatok, numeral, FirstNumeralOfk, OstatokOfFirstNumeral;
	int k = Сheck();   //проверка ввода
	if (k == 0)
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
		FirstNumeralOfk = k / 10;
		OstatokOfFirstNumeral = FirstNumeralOfk % 2;
		if (!OstatokOfFirstNumeral)
		{
			numeral = (k % 10) / 2;      //если  чётная  первая цифра
		}
		else
		{
			numeral = ((k % 10) / 2) + 5;  // если нечетная первая цифра
		}
		}
	printf("%d", numeral);
	getch();
	return 0;
}



int Сheck()
{
	char str[15];
	int i = 0, j, k, NumberOfCharacters = 0;
	printf("Input integer k from 1 to 176:");
	scanf("%s", &str);
	while (str[i] != '\0')
	 {
		NumberOfCharacters ++;
		i++;
	 }

	 for (j = 0; j < NumberOfCharacters; j++)
	 {
		if (str[j] >= '0' && str[j] <= '9')
		{
			continue;
		}
		else
		{
			return 0;
		}
	 }
	 return atoi(str);
}
