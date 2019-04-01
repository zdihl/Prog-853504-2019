int _tmain()
{
	double b,p=0;
	int f=0,l,h=0,i,n,o,k,t=0,u=0,v;
	printf("Vvedite veschestvennoe chislo: ");
	scanf("%lf",&b);
	p=b;
	v=b;
	while (p>0.0000000000000001)
	{
	   p=p-v;
	   for (i=1; i < 10; i++)
	   {
		  p=p+p;
	   }
           u++;
	   v=p;
	}
	u=u-1;
	n=b;
	while(n/10)
	{
		f++;
		n=n/10;
	}
	f=f+1;
	n=b;
	printf("f=%d\n",f);
	for(i=0;i<f;i++)
	{
		l=n%10;
		h=h+l;
		n=n/10;
	}
	for (i = 0; i < u; i++)
	{
		b=b*10;
	}
	o=b;
	for(i=0;i<u;i++)
	{      
		k=o%10;
		t=t+k;
		o=o/10;
	}
	if(t==h)
	{
		printf("h=%d\n",h);
		printf("t=%d\n",t);
	}
	 if(t<h)
	{
		printf("h=%d\n",h);
	}
	 else if(t>h)
	{
		printf("t=%d\n",t);
	}
	getch();
	return 0;
}
