int _tmain()
{
	double b;
	int f=0,v=0,n;
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
	b=b-v;
	while (v!=0)
	{
		b=b*10;
		v=b+1e-9;
		n=n+v;
		b=b-v;
	}
	if(f==n)
	{
		printf("n=%d\n",n);
		printf("f=%d\n",f);
	}
	if(f<n)
	{
		printf("n=%d\n",n);
	}
	else if(f>n)
	{
		printf("f=%d\n",f);
	}
	getch();
	return 0;
}
