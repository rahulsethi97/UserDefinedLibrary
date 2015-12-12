#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void main_1()
{

int a;

while(1)
{
printf("\n1.Linked List\n2.Stack\n3.Queue\n4.Tower of hanoi\n5.Sorting techniques\n6.Binary Search\n7.Tree\n8.Exit\nYour Choice:");
scanf("%d",&a);
  switch(a)
  {
    case 1:
system("reset");
     linkedlistmain();
    break;
    case 2:
     system("reset");
     stacks();
    break;
    case 3:
     system("reset");
     queuemain();
    break;
    case 4:
     system("reset");
     tower_of_hanoi();
    break;
    case 5:
     system("reset");
     sortmain();
    break;
    case 6:
     system("reset");
     bin_search();
    break;
    case 7:
     system("reset");
     treemain();
    break;
    case 8:
     system("reset");
     bye();
     exit(0);
    break;
  }
}
}

