/**************************************************************************************************
 Name        : ex17.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 17
 **************************************************************************************************/
 
#include <stdio.h>

void swap_array(int arr1[], int arr2[],int size)
{
	int i = 0, temp;
	/* Swap each element in array1 with the corresponding element in array2 */
	for(i=0;i<size;i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;
	}
}

int main(void)
{
	int i;
	int array1[5] = { 1, 2, 3, 4, 5};
	int array2[5] = { 6, 7, 8, 9, 10};

	printf("Array1 before the Swap : ");
	/* Print the array1 before call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");

	printf("Array2 before the Swap : ");
	/* Print the array2 before call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array2[i]);
	}
	printf("\n");

	swap_array(array1,array2,5);

	printf("Array1 after the Swap : ");
	/* Print the array1 after call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array1[i]);
	}
	printf("\n");

	printf("Array2 after the Swap : ");
	/* Print the array2 after call the swap function */
	for(i=0;i<5;i++)
	{
		printf("%d ",array2[i]);
	}
	printf("\n");
	return 0;
}