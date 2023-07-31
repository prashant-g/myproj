#include<stdio.h>
#include "head.h"

int main()
{
	int x=10,y=7,m=10,n=45;
	int num1, num2,num3,num;
	num1=mysqaure(&x);
	printf("num1 = %d\n",num1);
	num2=mycube(&y);
	printf("num2 = %d\n",num2);
	num3=mymax(&m,&n);
	printf("num3 = %d\n",num3);
	if(isevenodd(45))
		printf("Given number even\n");
	else
		printf("number is odd\n");

	num=sumval(10,20,30,40);
	printf("sum of num = %d\n",num);
}