/**************************************************************************************************
 Name        : ex6.c
 Author      : Mohamed Tarek
 Description : Assignment 3 - Ex 6
 **************************************************************************************************/
 
#include <stdio.h>

int Linear_Search_Find_Last(const int array[],int element,int n); //Function Prototype

int main( void )
{
    const int size = 10;
    int i;
    int array[size];
    int location;
    int element;

    printf("Enter the required array: \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Enter element for search: ");
    scanf("%d",&element);
	
	/* pass the array to the function */
    location = Linear_Search_Find_Last(array,element,size);
    if(location == -1)
    {
        printf("\nElement not found\n");
    }
    else
    {
        printf("\nThe element at the location: %d",location);
    }
    return 0;

}

int Linear_Search_Find_Last(const int *arr,int element,int n)
{
    int i;
	int index = -1; /* assume the element not exist in the array */
	
    for(i=0;i<n;i++)
	{
        if(element==arr[i])
		{
			/* Index will contain the array index of the last time the element found in the array */
			index = i; 
		}
    }
	/* return the last value of the index variable */
    return index;
}