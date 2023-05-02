/*
 * Q19.c
 *
 *  Created on: Dec 3, 2019
 *      Author: nobol billy
 */


#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,number;
	printf("Enter Number of Lines") ;
	scanf("%d",&number);
	printf("\n");
	for (int j=number;j>=0;j--){
	for(i=0;i<j;i++){
		printf("*");
	}
	printf("\n");
	}
	return 0;
}
