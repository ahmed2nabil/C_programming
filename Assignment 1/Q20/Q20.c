/*
 * Q20.c
 *
 *  Created on: Dec 3, 2019
 *      Author: nobol billy
 */


#include<stdio.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int number;
	printf("Enter Number of Lines") ;
	scanf("%d",&number);
	printf("\n");
	for (int j=0;j<number;j++){
	for(int i=j;i<number-1;i++){
		printf(" ");
	}
for(int k=0;k<((2*j)+1);k++){
	printf("*");
}

	printf("\n");
	}
	return 0;
}
