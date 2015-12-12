#include<stdio.h>
#include<stdlib.h>
#include "library.h"


tree * RR(tree *T)
{
               T=rotateleft(T);
               return(T);
}
