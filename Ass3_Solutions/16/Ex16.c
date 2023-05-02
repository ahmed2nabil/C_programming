/**************************************************************************************************
 Name        : ex16.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 16
 **************************************************************************************************/
 
#include <stdio.h>

void Reverse_Array(int size, int* arr)
{
	int i = 0, temp;
	while(i <  (size / 2))
	{
		temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
		i++;
	}
}

int main(void)
{
	int i;
	int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	/* Print the array before call the reverse function */
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");

	Reverse_Array(10,array);

	/* Print the array after call the reverse function */
	for(i=0;i<10;i++)
	{
		printf("%d ",array[i]);
	}
	return 0;
}