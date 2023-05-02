/*
 * Q15.c
 *
 *  Created on: Jul 10, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i, num,pow,res=1;
	printf("Enter the number=");
	scanf("%d",&num);
	printf("Enter the power=");
	scanf("%d",&pow);
	for(i=1;i<=pow;i++)
	{
		res*=num;

	}
	printf("The reult=%d\n",res);
}
