#include<stdio.h>
#include<stdlib.h>
#include "library.h"



struct node * del_all(struct node * start)
{
struct node *save;

while(start!=NULL)
{
save=start;
start=start->link;
free(save);
}
printf("\nList deleted.\n");
return start;
}
