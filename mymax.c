#include<stdio.h>
int mymax(int *num1,int *num2)
{
	int temp;
	
	if(*num1 > *num2)
		temp=*num1;
	else
		temp=*num2;
	return temp;
}