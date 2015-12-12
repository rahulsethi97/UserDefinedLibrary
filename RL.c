#include<stdio.h>
#include<stdlib.h>
#include "library.h"


tree * RL(tree *T)
{
               T->right=rotateright(T->right);
               T=rotateleft(T);
               return(T);
}
