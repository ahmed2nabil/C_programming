/*
 * Q5.c
 *
 *  Created on: Jul 17, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int first_occ(int a[],int s,int e){
	int i ;
	for(i=0;i<s;i++){
		if(e==a[i]){
return i ;
	}

	}
	return -1;
}
#define size 6
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int fun,element;
	int a[size]={1,2,3,4,4,4};
	printf("Enter the required number ");
	scanf("%d",&element);
	fun= first_occ(a,size,element);
	printf("The First Occ=%d",fun);
}

