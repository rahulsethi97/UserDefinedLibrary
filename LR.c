#include<stdio.h>
#include<stdlib.h>
#include "library.h"



tree * LR(tree *T)
{
               T->left=rotateleft(T->left);
               T=rotateright(T);
               return(T);
}
