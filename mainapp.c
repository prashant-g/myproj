#include<stdio.h>
#include "head.h"

int main()
{
	int x=10,y=7,m=10,n=45;
	int num1, num2,num3;
	num1=mysqaure(&x);
	printf("num1 = %d\n",num1);
	num2=mycube(&y);
	printf("num2 = %d\n",num2);
	num3=mymax(&m,&n);
	printf("num3 = %d\n",num3);
}