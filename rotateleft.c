#include<stdio.h>
#include<stdlib.h>
#include "library.h"


tree * rotateleft(tree *x)
{
               tree *y;
               y=x->right;
               x->right=y->left;
               y->left=x;
               x->ht=height(x);
               y->ht=height(y);
               return(y);
}
