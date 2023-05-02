/*
 * Q13.c
 *
 *  Created on: Jul 10, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num;
	printf("Enter positive integer number=");
	scanf("%d",& num);
	if ((num%2!=0)&(num%3!=0)&(num%5!=0)&(num%7!=0)){
		printf("Prime Number");
	}
	else if ((num==2)||(num==3)||(num==5)||(num==7))
		printf(" Prime Number");
	else {
		printf("NOT Prime Number");
	}
}

