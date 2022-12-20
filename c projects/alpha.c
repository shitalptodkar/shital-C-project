#include<stdio.h>
#include<string.h>
main()
{


char s[20];
int digit=0,i=0,alpha=0,space=0,splchar=0;
printf("enter string...");
gets(s);
for(i=0;s[i]!=0;i++)
{
	if(s[i]>='a' && s[i]<='z'|| s[i]>='a' && s[i]<='z')
	{
		alpha++;
	}
	else if(s[i]>='0' && s[i]<='9')
	{
		digit++;
	}
	else if (s[i]==' ')
	
	{
		space++;
	}
	else
	{
		splchar++;
	}
}
}
