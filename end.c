#include<stdio.h>
#include<stdlib.h>
#include "library.h"

struct node * end(int a,struct node *start)
{
struct node *new,*temp;
temp=start;
while(temp->link!=NULL)
{
temp=temp->link;
}
new=(struct node*)malloc(sizeof(struct node));
new->link=NULL;
new->info=a;
temp->link=new;
return start;
}
