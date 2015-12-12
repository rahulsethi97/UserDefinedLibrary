#include<stdio.h>
#include<stdlib.h>
#include "library.h"


struct node * create(int a,struct node *start)
{
struct node *new,*temp;
temp=start;
new=create_node();
new->info=a;
while(temp->link!=NULL)
{
temp=temp->link;
}
temp->link=new;
return start;
}
