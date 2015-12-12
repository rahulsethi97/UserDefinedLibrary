#include<stdio.h>
#include<stdlib.h>
#include "library.h"



struct node * del_ith(int i,struct node *start)
{
int j=1;
struct node *temp,*save;
temp=start;
while(j!=(i-1))
{
temp=temp->link;
j++;
}
save=temp->link;
temp->link=temp->link->link;

free(save);
printf("\nElement deleted.\n");
return start;
}
