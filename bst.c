#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void bst()
{
   tree *root=NULL;
   int x,n,i,op;
while(1){
        printf("\n1)Create a BST:");
        printf("\n2)Insert:");
        printf("\n3)Delete:");
        printf("\n4)Display:");
        printf("\n5)Quit:");
        printf("\n\nEnter Your Choice:");
        scanf("%d",&op);
        switch(op)
      {
           case 1:
          printf("\nEnter -1 to stop:");
         do
       {
          printf("\nEnter a data:");
          scanf("%d",&x);
          if(x!=-1)
          root=insert(root,x);
       }while(x!=-1);
           break;
          case 2:printf("\nEnter a data:");
          scanf("%d",&x);
          root=insert(root,x);
          break;
          case 3:printf("\nEnter a data:");
          scanf("%d",&x);
          root=delete(root,x);
          break;
          case 4:  printf("\nPreorder sequence:\n");
          preorder(root);
          printf("\n\nInorder sequence:\n");
          inorder(root);
          printf("\n\nPostorder sequence:\n");
          postorder(root);
          printf("\n");
          break;
          case 5:
 system("reset");
          treemain();
          break;
      }
 }

}
