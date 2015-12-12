#include<stdio.h> 
#include "library.h"
 #include<stdlib.h>


void enqueue(int value,struct node **rear,struct node **front)
{
     struct node *temp;
     temp=(struct node *)malloc(sizeof(struct node));
     temp->info=value;
     if (*front == NULL)
     {
           *front=temp;
           (*front)->link=NULL;
           *rear=*front;
     }
     else
     {
           (*front)->link=temp;
           *front=temp;
           (*front)->link=NULL;
     }
}
