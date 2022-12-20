#include<stdio.h>
main()
{
	int a,b,c;
	printf("enter 3 number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("\n a is greater");
		}
		else
		{
			printf("\n c is greater");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n b is greater");
		}
		else
		{
			printf("\n c is greater");
		}
	}
}
