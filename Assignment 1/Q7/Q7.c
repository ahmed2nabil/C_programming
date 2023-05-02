/*
 * Q7.c
 *
 *  Created on: Jul 9, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int num1,num2,num3;
	int small;
	printf("enter three integers=\n");
	scanf("%d %d %d",&num1,&num2,&num3);
	small=num1;
	if (num2<num1){
		small=num2;
	}
	if(num3<num2) {
		small=num3;
	}
	printf("The Smallest number =%d",small);
}

