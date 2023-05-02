/*
 * Q9.c
 *
 *  Created on: Jul 9, 2018
 *      Author: nobol billy
 */
#include <stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int grade;
	printf("Enter your grade =");
	scanf("%d",&grade);
	if((grade>=85)&&grade<=100){
		printf(" Excellent");
	}
	else if (grade>=75){
		printf("Very Good");
	}
	else if (grade>=65){
		printf("Good ");
	}
	else if (grade>=50){
		printf("Pass");
	}
	else if (grade>=0){
		printf("Fail");
}
	else
		printf("invalid grade");
}

