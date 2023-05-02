/*
 * Q1.c
 *
 *  Created on: Jul 23, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int Array[5];
	int sum=0,i;
	int *ptr;
	   printf("\nEnter 10 elements : ");
	for (i=0;i<5;i++){
		scanf("%d",&Array[i]);
	}
	ptr=Array;
	for(i=0;i<5;i++){
		sum = sum + *ptr;
		ptr++;
	}
	 printf("The sum of array elements : %d", sum);
return 0;
}

