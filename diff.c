#include<stdio.h>
#include<stdlib.h>
#include "library.h"


int diff(tree *T)
{
               int lh,rh;
               if(T==NULL)
               return(0);
               if(T->left==NULL)
                              lh=0;
               else
                              lh=1+T->left->ht;
               if(T->right==NULL)
                              rh=0;
               else
                              rh=1+T->right->ht;
               return(lh-rh);
}
