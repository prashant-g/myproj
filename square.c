#include<stdio.h>
int mysquare(int *num1)
{
	printf("in mysquare function\n");
	int temp;
	temp=*num1 * *num1;
	return temp;
	
}