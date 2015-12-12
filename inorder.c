#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void inorder(tree *T)
{
               if(T!=NULL)
               {
                              inorder(T->left);
                              printf("%d ",T->data);
                              inorder(T->right);
               }

}
