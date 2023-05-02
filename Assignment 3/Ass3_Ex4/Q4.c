/*
 * Q4.c
 *
 *  Created on: Jul 17, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define size 5
void selectionsort(int a[],int s){
	int i,j,temp,min;
	for(i=0;i<s-1;i++){
		min=i;
		for(j=i+1;j<s;j++){
			if(a[min]>a[j]){
				min=j;
			}
		    }
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
int main (){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,a[size];
	printf("Enter the required array to be sorted");
	for (i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("\n");
	selectionsort(a,size);
	printf("Array after sorted\n");
	for(i=0;i<size;i++){
		printf("%d\t",a[i]);
	}

	return 0 ;
}

