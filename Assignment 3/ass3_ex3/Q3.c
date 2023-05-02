/*
 * Q3.c
 *
 *  Created on: Jul 16, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
#define size 5
void bubblesort(int a[],int s){
	int i,j,temp ;

	for (i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
		if (a[i]>a[j]){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
		}
	}
}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i ,a[size];
printf("Enter the required numbers to be sorted");
for (i=0;i<size;i++){
	scanf("%d",&a[i]);
}
printf("Array before sorting\t");
for (i=0;i<size;i++){
	printf("%d\t",a[i]);
}
printf("\n");
bubblesort(a,size);
printf("Array after sorting\t");
for(i=0;i<size;i++){
	printf("%d\t",a[i]);
}



return 0;
}


