#include<stdio.h>
#include<stdlib.h>
#include "library.h"

struct node * reverse(struct node *start)
{

struct node *temp=NULL,*temp1;
while(start!=NULL)
{
temp1=start->link;
start->link=temp;
temp=start;
start=temp1;
}
start=temp;
return start;
}
