#include <stdio.h>
#include <conio.h>
#include <limits.h>

int main()
{
int i,j,chislo;
double ch[100],sum;
sum=0;
ch[0]=0;
ch[1]=1;
for (i=2; i<100; i++) {
ch[i]=ch[i-1]+ch[i-2];
if (ch[i]>INT_MAX) {
i--;
chislo=ch[i];
printf("Nomer poslednego chisla: %d %s",i,"\n");
printf("Poslednee chislo: %d %s",chislo,"\n");
for (j=0; sum<INT_MAX; j++) {
sum=sum+ch[j];
}
if (sum>INT_MAX) {
sum=sum-ch[i-1];
}
printf("Summa chisel: %.0f %s",sum,"\n");
goto exit;
}
}
exit:
getch();
return 0;
}
