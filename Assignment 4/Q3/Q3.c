/*
 * Q3.c
 *
 *  Created on: Jul 23, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
void fun(int arr[],int s){
int temp;
int *ptr1=arr;
int*ptr2=arr+s-1;
while(ptr1<ptr2){
temp=*ptr1;
*ptr1=*ptr2;
*ptr2=temp;
ptr1++;
ptr2--;
}

}
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	const int size =6;
int arr[size];
int i;
printf("Enter the elements of array=");
for(i=0;i<size;i++){
scanf("%d",&arr[i]);
}
fun(arr,size);
printf("The result=\n");
for(i=0;i<size;i++){
printf("%d\t",arr[i]);
}
}
