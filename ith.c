#include<stdio.h>
#include<stdlib.h>
#include "library.h"


struct node * ith(int a,struct node *start)
{
int i,k=1;
struct node *new,*temp1;
temp1=start;
printf("\nAt what position you want to insert element: ");
scanf("%d",&i);

while(k!=(i-1))
{
temp1=temp1->link;
k++;
}
new=(struct node*)malloc(sizeof(struct node));
new->link=temp1->link;
new->info=a;
temp1->link=new;
return start;
}
