#include<stdio.h>
#include<stdlib.h>
#include "library.h"



struct node * del_first(struct node *start)
{
struct node *save;
save=start;
start=start->link;
free(save);
printf("\nElement deleted.\n");
return start;
}
