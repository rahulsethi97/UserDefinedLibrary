#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void display_circular(struct node *start)
{
struct node *temp;
temp=start;

do
{
printf("\n%d",temp->info);
temp=temp->link;
}while(temp!=start);
}
