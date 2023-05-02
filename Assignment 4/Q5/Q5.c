/*
 * Q5.c
 *
 *  Created on: Jul 24, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int main(){
int i;
int const size=6;
int arr[]={1,2,3,4,5,6};
int arr2[size];
int *ptr;
ptr=arr;
for(i=0;i<size;i++){
arr2[i]=*ptr;
ptr++;
}
for(i=0;i<size;i++){
	printf("%d \t",arr2[i]);
}
}

