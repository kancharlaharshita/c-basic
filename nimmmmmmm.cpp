#include<stdio.h>
main()
{
	int min,a,hr;
	printf("enter a values");
	scanf("%d",&a);
	hr=a/60;
	min=a%60;
	printf("hr is %d\n min is %d",hr,min);
}
