//Вариант 10
#include <stdio.h>

int main()
{
	int n;
	float f,p = 1.0,temp = 0;

	printf ("Введите n и f: ");
	scanf("%d%f",&n,&f);

	for (int i = 1; i <= n; i++)
	{
		temp = 0;
		for (int k = 0; k <= i; k++)
			temp += f + k;
		p *= 1.0/temp;
	}

	printf("Ответ: %f \n", p);
	return 0;
}
