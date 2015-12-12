#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void linkedlistmain()
{
int a;

while(1)
{
printf("\n1.Basic Linked List\n2.Circular Linked List\n3.Exit\nYour Choice:");
scanf("%d",&a);
  switch(a)
  {
    case 1:
      system("reset");
     linked_list();
    break;
    case 2:
      system("reset");
     circular_list();
    break;
    case 3:
     system("reset");
     main_1();
    break;
   }
}
}
