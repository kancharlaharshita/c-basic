#include<stdio.h>
main()
{
	 int a,b,l,s,n;
	 printf("enter a,b values");
	 scanf("%d%d",&a,&b);
	 n=b/a;
	 l=a*n;
	 s=n*(a+l)/2;
	 printf("/n sum %d",s);
}
