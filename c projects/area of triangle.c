#include<stdio.h>
main()
//area of triangle 1/2*base*height
{
	float base,height,aot;
	printf("enter the value of base");
	scanf("%f",&base);
	printf("enter the value of height");
	scanf("%f",&height);
	aot=0.5*base*height;
	printf("area of triangle=%.2f",aot);
}
