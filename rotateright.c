#include<stdio.h>
#include<stdlib.h>
#include "library.h"



tree * rotateright(tree *x)
{
               tree *y;
               y=x->left;
               x->left=y->right;
               y->right=x;
               x->ht=height(x);
               y->ht=height(y);
               return(y);
}
