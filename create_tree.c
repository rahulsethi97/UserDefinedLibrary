#include<stdio.h>
#include<stdlib.h>
#include "library.h"



tree * create_tree(tree *root)
{  
  int data;
  tree *temp;
 
root=tree_node();
printf("\nEnter the value of root: ");
scanf("%d",&data);
root->data=data;
root->left=NULL;
root->right=NULL;
temp=root;
 
create_normal(temp);
 return root;   
}
