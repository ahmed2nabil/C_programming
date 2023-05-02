/*
 ============================================================================
 Name        : Maximum_Data_Inside_List.c
 Author      : Mohamed Tarek
 Date        : 30/7/2017
 Description : Example to demonstrate how to get the maximum data inside the Linked List.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//Create Linked List
void insertAtLast(int data)
{
   // Allocate memory for new node;
   struct node *link = (struct node*) malloc(sizeof(struct node));

   link->data = data;
   link->next = NULL;

   // If head is empty, create new list
   if(head==NULL)
   {
      head = link;
      return;
   }

   current = head;

   // move to the end of the list
   while(current->next != NULL)
   {
	   current = current->next;
   }

   // Insert link at the end of the list
   current->next = link;
}

//display the list
void printList(void)
{
   struct node *ptr = head;

   printf("[head] =>");

   //start from the beginning
   while(ptr != NULL)
   {
      printf(" %d =>",ptr->data);
      ptr = ptr->next;
   }

   printf(" [null]\n");
}

//find certain item inside the list
void findMaximumDataInTheList(int *max_ptr)
{
   if(head==NULL)
   {
      printf("Linked List is empty");
      return;
   }
   //assume that the head is the maximum value
   *max_ptr = head->data;

   // start checking from the second node
   current = head->next;

   while(current != NULL)
   {
      if(current->data > *max_ptr)
      {
    	  *max_ptr = current->data;
      }
      current = current->next;
   }
}

int main(void)
{
	int max;
	insertAtLast(10);
	insertAtLast(20);
	insertAtLast(30);
	insertAtLast(1);
	insertAtLast(40);
	insertAtLast(56);

	// print the list
	printList();

	// get the maximum value inside the list
	findMaximumDataInTheList(&max); // max will be passed by address

	//max now contain the maximum value
	printf("Maximum Value Inside The List : %d",max);

	return 0;
}
