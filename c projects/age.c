#include<stdio.h>
main()
{
	int age;
	printf("enter the age");
	scanf("%d",&age);
	if(age<=18)
	{
		printf("\n not fit for working");
	}
   
   
	
		if(age>=18 && age<=60)
		{
			printf("\n fit for working");
		}
	
		
	else
	{
		printf("\n ready for retirment");
	}
}
