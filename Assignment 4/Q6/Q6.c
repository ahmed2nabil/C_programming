/*
 * Q6.c
 *
 *  Created on: Jul 24, 2018
 *      Author: nobol billy
 */
#include<stdio.h>
int maxmium(int arr[],int size){
	int i,max;
	int *ptr;
	ptr=arr;
	max=*ptr;
	for(i=1;i<size;i++){
		ptr++;
		if(ptr[i]>max)
			max=*ptr;
	}

return max ;
}
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	int i,max,*ptr;
	int const size =6;
	int arr[size];
	ptr=arr;
	printf("Enter The elements of array=");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	max=maxmium(arr,size);
	printf("The elements of array=");
for(i=0;i<size;i++){
printf("%d \t",*(ptr+i));
}

printf("\nThe maxmium number of array= %d",max);
}
