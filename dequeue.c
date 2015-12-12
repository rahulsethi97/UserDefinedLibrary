#include<stdio.h> 
#include "library.h"
 #include<stdlib.h>

void dequeue(struct node **rear)
{
       struct node *temp, *var=*rear;
      if(var==*rear)
      {
             *rear = (*rear)->link;
             free(var);
      }
      else
      printf("\nQueue Empty");
}
