#include<stdio.h>
void add();
main()
{
	add();
}
void add()
{
	int a,b,c;
	printf("\n enter the value: ");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n addition=%d",c);
	
}
