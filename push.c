#include<stdio.h>
#include<stdlib.h>
#include "library.h"



struct node * push(int c,struct node *top)
{
struct node *new;

new=(struct node*)malloc(sizeof(struct node*));
new->info=c;
new->link=top;
top=new;

printf("\nItem pushed=%d",c);
return top;
}
