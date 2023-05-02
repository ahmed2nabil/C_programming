/*
 * Q1.c
 *
 *  Created on: Jul 16, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define Size 5
int total(int a[],int S){
	int i,sum=0 ;
	for (i=0;i<S;i++){
		sum+=a[i];
	}
	return sum;
}
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int a[Size],i,sum;
	printf("Enter the elements of array=");
	for (i=0;i<Size;i++){
		scanf("%d",&a[i]);
	}
sum=total(a,Size);
printf("The total of integers=%d",sum);
return 0;
}
