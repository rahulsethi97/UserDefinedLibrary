#include<stdio.h>
#include<stdlib.h>
#include "library.h"



void display_stack(struct node * top)
{
int j;

if(top==NULL)
{
printf("\nStack Empty");
}
else
{
while(top!=NULL)
{
printf("\n%d",top->info);
top=top->link;
}
}
}
