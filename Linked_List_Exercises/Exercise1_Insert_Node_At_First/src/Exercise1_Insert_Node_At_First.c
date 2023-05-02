/*
 ============================================================================
 Name        : Exercise1_Insert_Node_At_First.c
 Author      : Mohamed Tarek
 Date        : 17/7/2017
 Description : Example to demonstrate how to insert a node in Linked List from the beginning.
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

//insert link at the beginning of the list
void insertAtFirst(int data)
{
   //create a link
   struct node *link = (struct node*) malloc(sizeof(struct node));

   //link->key = key;
   link->data = data;

   //point it to old first node
   link->next = head;

   //point the head to the new first node
   head = link;
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

int main(void)
{
	insertAtFirst(10);
	insertAtFirst(20);
	insertAtFirst(30);
	insertAtFirst(1);
	insertAtFirst(40);
	insertAtFirst(56);

	// print the list
	printList();
	return 0;
}
