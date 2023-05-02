/*
 ============================================================================
 Name        : Exercise3_Find_Linked_List_Size.c
 Author      : Mohamed Tarek
 Date        : 17/7/2017
 Description : Example to demonstrate how to get Linked List size.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct node {
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

// calculate the list size
void sizeOfList(void)
{
   int size = 0;

   // check if the linked list is empty
   if(head==NULL)
   {
      printf("List size : %d ", size);
      return;
   }
   // list is not empty contains one node at least
   current = head;
   size = 1;
   while(current->next != NULL)
   {
      current = current->next;
      size++;
   }
   printf("List size : %d ", size);
}

int main(void)
{
	insertAtLast(10);
	insertAtLast(20);
	insertAtLast(30);
	insertAtLast(1);
	insertAtLast(40);
	insertAtLast(56);

	// print the list
	printList();

	// get the size of the list
	sizeOfList();

	return 0;
}
