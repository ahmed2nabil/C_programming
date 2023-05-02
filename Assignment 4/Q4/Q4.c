/*
 * Q4.c
 *
 *  Created on: Jul 24, 2018
 *      Author: nobol billy
*/
#include<stdio.h>
int small(int arr[],int s){
int *ptr=arr;
int i,sm;
sm=*ptr;
for(i=1;i<s;i++){
	ptr++;
if(*ptr<sm)
	sm=*ptr;
}
return sm;
}
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
int const size=6;
int arr[size];
int i,smal;
printf("Enter The element of array=");
for (i=0;i<size;i++){
scanf("%d",&arr[i]);
}
smal=small(arr,size);
printf("The Smallest Number of array= %d",smal);
}
