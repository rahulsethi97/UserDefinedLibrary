#include<stdio.h>
#include<stdlib.h>
#include "library.h"



void display_tree(tree *root)
{
int a;
printf("\n1.Inorder 2.Preorder 3.Postorder Your choice: ");
scanf("%d",&a);
switch(a)
{
case 1:
inorder(root);
break;
case 2:
preorder(root);
break;
case 3:
postorder(root);
break;
default:
printf("\nWrong choice\n");
}
}
