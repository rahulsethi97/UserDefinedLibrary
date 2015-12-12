#include<stdio.h>
#include<stdlib.h>
#include "library.h"
void treemain()
{
int a;

while(1)
{
printf("\n1.Basic tree\n2.BST\n3.AVL Tree\n4.Exit\nYour Choice:");
scanf("%d",&a);
  switch(a)
  {
    case 1:
 system("reset");
     tree_basic();
    break;
    case 2:
 system("reset");
     bst();
    break;
    case 3:
 system("reset");
    avl();
    break;
    case 4:
 system("reset");
     main_1();
    break;
   }
}
}
