/*
 * Q8.c
 *
 *  Created on: Jul 24, 2018
 *      Author: nobol billy
 */
#define size  5
#include<stdio.h>
void swap (int a[],int b[]){
int i;
int temp,*ptr1,*ptr2;
ptr1=a;
ptr2=b;
for(i=0;i<size;i++){
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
ptr1++;
ptr2++;
}
}
int main(){
	int i;
	int arr1[]={1,3,5,7,9};
	int arr2[]={0,2,4,6,8};
void(*ptr)(int *,int *)=swap;
for(i=0;i<size;i++){
printf("arr1[%d]= %d \t arr2[%d]= %d \n",i,arr1[i],i,arr2[i]);
}
(*ptr)(arr1,arr2);
printf("\nAfter Swapping\n");
for(i=0;i<size;i++){
printf("arr1[%d]= %d \t arr2[%d]= %d \n",i,arr1[i],i,arr2[i]);
}
}
