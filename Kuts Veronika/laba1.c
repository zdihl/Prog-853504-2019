int _tmain()
{
	double b;
	int f=0,v,n,m=0;
	printf("Vvedite veschestvennoe chislo: ");
	scanf("%lf",&b);
	n=b;
	while(n!=0)
	{
	        f=f+n%10;
	        n=n/10;
	}
	n=0;
	v=b+1e-9;
	while (v==0)
	{
		b=b*10;
		v=b+1e-9;
		n=n+v;
	}
	while (v!=0)
	{       
		b=b-v;
		b=b*10;
		v=b+1e-9;
		while (v==0)
	        {
	           b=b*10;
		   v=b+1e-9;
		   m++;
		   if (m==6)
		   {
			   break;
		   }
		}
		n=n+v;
	}
	if(f==n)
	{
		printf("summa cifr posle tochki: %d\n",n);
		printf("summa cifr do tochki: %d\n",f);
	}
	if(f<n)
	{
		printf("summa cifr posle tochki: %d\n",n);
	}
	else if(f>n)
	{
		printf("summa cifr do tochki: %d\n",f);
	}
	getch();
	return 0;
}
