#include<stdio.h>
#include<stdlib.h>
#include "library.h"



int height(tree *T)
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
                 if(lh>rh)
                        return(lh);
                 else
                        return(rh);
}
