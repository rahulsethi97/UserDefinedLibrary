#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void circular_list()
{
struct node *start=NULL,*next;
int a;
while(1)
{
printf("\n\n1.Create a list.\n2.Display.\n3.Exit.\nYour Choice: ");
scanf("%d",&a);

switch(a)
{
case 1:
start=create_circular(start,next);
break;
case 2:
display_circular(start);
break;
case 3:
 system("reset");
linkedlistmain();
default:
printf("\nWrong Choice");
}
}
}



