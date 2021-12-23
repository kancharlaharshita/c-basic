#include<stdio.h>
main()
{
	int p,t;
	float r,si;
	printf("enter p,t,r values");
	scanf("%d%d%f",&p,&t,&r);
	si=p*t*r/100;
	printf("si is %.2f",si);
}
