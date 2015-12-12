#include<stdio.h>
#include<stdlib.h>
#include "library.h"



tree * LL(tree *T)
{
               T=rotateright(T);
               return(T);
}
