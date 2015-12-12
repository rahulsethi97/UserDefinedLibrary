#include<stdio.h>
#include<stdlib.h>
#include "library.h"

void stacks()
{
int a,b,p;
struct node *top=NULL;
while(1)
{
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit\nYour Choice: ");
scanf("%d",&a);
switch(a)
{
case 1:
printf("\nEnter the Element: ");
scanf("%d",&b);
top=push(b,top);
break;
case 2:
top=pop(top);
break;
case 3:
display(top);
break;
case 4:
 system("reset");
main_1();
break;
default:
printf("\n\t\tWrong Choice\n\n");
}
}

}

