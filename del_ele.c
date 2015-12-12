#include<stdio.h>
#include<stdlib.h>
#include "library.h"



struct node * del_ele(struct node *start)
{
int a,i;
printf("\n1.Delete whole list.\n2.Delete First element.\n3.Delete Last Element.\n4.Delete ith element.\nYour Choice: ");
scanf("%d",&a);
switch(a)
{
case 1:
start=del_all(start);
break;
case 2:
start=del_first(start);
break;
case 3:
start=del_last(start);
break;
case 4:
printf("\nEnter the position of element: ");
scanf("%d",&i);
start=del_ith(i,start);
break;
default:
printf("\nWrong choice");
}
return start;
}
