/*
 * Q7.c
 *
 *  Created on: Jul 24, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
void swap(int *a,int*b){
	*a=*a^*b;
	*b=*a^*b;
	*a=*b^*a;
}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
int num1,num2;
void(*ptr)(int *,int *)=swap;
printf("Enter Two Numbers=");
scanf("%d %d",&num1,&num2);
printf("\nNumber 1 = %d \t Number 2= %d ",num1,num2);
(*ptr)(&num1,&num2);
printf("\nAfter swapping \nNumber1= %d \t Number 2 = %d",num1,num2);

}

