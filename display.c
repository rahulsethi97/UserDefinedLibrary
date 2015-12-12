#include<stdio.h>
#include<stdlib.h>
#include "library.h"

void display(struct node *start)
{
struct node *temp;
temp=start;
if(start==NULL)
{
printf("\nList Empty");
}
else
{
while(temp!=NULL)
{
printf("\n%d",temp->info);
temp=temp->link;
}
}
}

