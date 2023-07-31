#include<stdio.h>
int mycube(int *num1)
{
	printf("in mycube function");
	int temp;
	temp=*num1 * *num1 * *num1;
	return temp;
	
}