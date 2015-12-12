#include<stdio.h>
#include<stdlib.h>
#include "library.h"


tree * delete(tree *T,int x)
{       tree *p;

   if(T==NULL)
    {
       return NULL;
    }
  else

       if(x > T->data) 
      {
           T->right=delete(T->right,x);
               
      }
       else
           if(x<T->data)
           {
            T->left=delete(T->left,x);
                         }
           else
           {
            if(T->right !=NULL)
            {  
              p=T->right;
              while(p->left != NULL)
              p=p->left;
              T->data=p->data;
              T->right=delete(T->right,p->data);
                
             }
             else
                return(T->left);

           }
               T->ht=height(T);
               return(T);
}
