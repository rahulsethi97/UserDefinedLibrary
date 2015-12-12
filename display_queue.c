#include<stdio.h> 
#include "library.h"
 #include<stdlib.h>


void display_queue(struct node *rear)
{
     struct node *var=rear;
     if(var!=NULL)
     {
           printf("\nElements are as:  ");
           while(var!=NULL)
           {
                printf("\t%d",var->info);
                var=var->link;
           }
     printf("\n");
     } 
     else
     printf("\nQueue is Empty");
}
