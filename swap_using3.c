#include<stdio.h>


void main()
{
	int a=5,b=10,c=0;

	printf("a=%d , b=%d \n",a,b);
	c=a;
	a=b;
	b=c;
	printf("a=%d , b=%d \n",a,b);

}
