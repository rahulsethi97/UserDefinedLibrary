#include<stdio.h>
#include<stdlib.h>
#include "library.h"



void preorder(tree *T)
{
               if(T!=NULL)
               {
                              printf("%d ",T->data);
                              preorder(T->left);
                              preorder(T->right);
               }
}
