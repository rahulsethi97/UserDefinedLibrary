#include<stdio.h>
#include<stdlib.h>
#include "library.h"


struct node * create_circular(struct node *start,struct node *next)
{
int i=0;
int b,k;
printf("\nHow many elements you want? ");
scanf("%d",&b);
for(k=1;k<=b;k++)
    {
int a;
printf("\nEnter the element: ");
scanf("%d",&a);
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
new->link=start;
new->info=a;
if(i==0)

{
start=new;
next=new;
i++;
}
else
{
next->link=new;
next=new;
}
    }
return start;
}
