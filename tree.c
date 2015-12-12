#include<stdio.h>
#include<stdlib.h>
#include "library.h"



void tree_basic()
{
int a;
tree *root=NULL;
while(1)
{
printf("\n1.Create.\n2.Display.\n3.Exit.\n4.Your choice:");

scanf("%d",&a);



switch(a)
{
case 1:
root=create_tree(root);
break;
case 2:
display_tree(root);
break;
case 3:
 system("reset");
treemain();
}
}
}
