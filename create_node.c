#include<stdio.h>
#include<stdlib.h>
#include "library.h"




struct node * create_node()
{
struct node *new;
new=(struct node*)malloc(sizeof(struct node));
new->link=NULL;
return new;
}
