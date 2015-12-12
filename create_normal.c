#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void create_normal(tree *temp)
{

int a;
  int data;
tree *newl,*newr;
 
while(1)
{
printf("\nFor %d node \n1.Left 2.Right 3.Both 4.No child 5.Stop \nYour choice: ",temp->data);
    scanf("%d",&a);
  
   if(a==1)
        {
           newl=tree_node();
           newl->left=NULL;
           newl->right=NULL;
           printf("\nEnter the value of left child of %d: ",temp->data);
           scanf("%d",&data);
           newl->data=data;
           temp->left=newl;
           temp=newl;
        }
else if(a==2)
        {
           newr=tree_node();
           newr->left=NULL;
           newr->right=NULL;
           printf("\nEnter the value of right child of %d: ",temp->data);
           scanf("%d",&data);
           newr->data=data;
           temp->right=newr;
           temp=newr;
        }
  
  else if(a==3)
        {   
           int c;
           newl=tree_node();
           newl->left=NULL;
           newl->right=NULL;
           printf("\nEnter the value of left child of %d: ",temp->data);
           scanf("%d",&data);
           newl->data=data;
temp->left=newl;
     
           
           newr=tree_node();
           newr->left=NULL;
           newr->right=NULL;
           printf("\nEnter the value of right child of %d: ",temp->data);
           scanf("%d",&data);
           newr->data=data;
temp->right=newr;
       
           
printf("\nWant to move to 1.left child 2.right child 3.both 4.No child.?\nYour choice: ");
scanf("%d",&c);
             if(c==1)
                  temp=newl;
             else if(c==2)
                  temp=newr;
              else if(c==3)
                  { 
                   temp=newl;
                   create_normal(temp);
                   temp=newr;
                   create_normal(temp);
                  }
              else
                break;
     
         }
else if(a==4||a==5)
         {
           break;
         }
}
}

