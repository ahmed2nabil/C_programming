/**************************************************************************************************
 Name        : ex1.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 1
 **************************************************************************************************/

#include <stdio.h>

#define ARR_SIZE 5

void total(int a[],int n)
{
	int i;
	int sum = 0;
	
	/* loop for all the array elements to calculate the sum */
	for(i=0;i<n;i++) 
	{
		/* calculate the sum */
		sum += a[i]; 
	}
	printf("sum of all array elements : %d\n",sum);
}

int main(void)
{
	int arr[ARR_SIZE];
	int i;
	printf("Please enter the arrat elements : \n");
	
	/* loop for all the array elements to fill the array elements */
	for(i=0;i<ARR_SIZE;i++) 
	{
		/* take array element by element */
		scanf("%d",&arr[i]); 
	}
	
	total(arr,ARR_SIZE);
	
	return 0;
}


