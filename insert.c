#include<stdio.h>
#include<stdlib.h>
#include "library.h"



tree * insert(tree *T,int x)
{
   if(T==NULL)
               {
                      T=(tree*)malloc(sizeof(tree));
                      T->data=x;
                      T->left=NULL;
                      T->right=NULL;
               }
               else
                     if(x > T->data)   
                      {
                          T->right=insert(T->right,x);
                     
                      }
                     else
                          if(x<T->data)
                            {
                                T->left=insert(T->left,x);
                                  
                            }
                                T->ht=height(T);
                                   return(T);
}

