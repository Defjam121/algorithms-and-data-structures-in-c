#include"singlylinkedlist.h"
#include<stdio.h>
#include<stdlib.h>

void printSinglyList(nodePtr head)
{
    //check if list is empty
    if(head == NULL)
    {
        puts("an empty list");
      return;
    }
     //traverse pointer
    nodePtr p =  head;
    printf("[ ");
    while(p!= NULL)
    {
        //get data
        int data = p->data;
        //print data
        printf("%d ",data);
        //move pointer
        p = p->next;
    }
    printf(" ]\n");
}

 void insert(nodePtr *head,int data)
 {
     //allocate node
     nodePtr node=(nodePtr)malloc(sizeof(Node));

     node->data = data;
     node->next = NULL;
     if( *head == NULL)
     {
         *head = node;
     }
     else
     {

         nodePtr p = *head;
         //find last node in the list
         for(p ; p->next != NULL ; p=p->next);
         p->next = node;
     }
 }
