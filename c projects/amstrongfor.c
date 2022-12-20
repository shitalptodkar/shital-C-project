#include<stdio.h>
main()
{
	int num,r,sum=0,f;
	printf("enter the number");
	num=153;
	for(f=num;num!=0;num=num/10)
	{
		r=num%10;
		sum=sum+(r*r*r);
	}
	if(sum==f)
	{
	
	printf("%d is an amstrong number",f);
    }
	else
	{
	
	printf("%d is not amstrong number",f);
    
	
	}
}
