#include<stdio.h>
int main()
{
	int a=2,b=6;
	printf("before swap: %d %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap: %d %d",a,b);
}
