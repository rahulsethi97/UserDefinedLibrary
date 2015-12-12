#include<stdio.h>
#include<stdlib.h>
#include "library.h"

struct node * first(int a,struct node *start)
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
new->info=a;
new->link=start;
start=new;
return start;
}
