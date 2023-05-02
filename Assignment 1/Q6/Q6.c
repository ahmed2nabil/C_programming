/*
 * Q6.c
 *
 *  Created on: Jul 9, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num1,num2;
	printf("Enter two numbers\n");
	scanf("%d %d",&num1,&num2);
	if(num1>num2)
	{
		printf("two numbers are not equal\n");
		printf("number 1 is greater than number 2\n");
	}
	else if (num1<num2)
	{
		printf("two numbers are not equal\n");
		printf("number 2 is greater than number 1\n");
	}
	else
	{
		printf("two numbers are equal\n");
	}
}
