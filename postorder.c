#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void postorder(tree *T) {
    if (T!= NULL) {
      postorder(T->left);
       postorder(T->right);
       printf("%d ",T->data);
         }
}
