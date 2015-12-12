#include<stdio.h>
#include "library.h"
void TOH(int d,char tower1,char tower2,char tower3)
{
   if(d==1)
     {
      printf("\nShift top disk from tower %c to %c",tower1,tower2);
     }
  else
{
    TOH(d-1,tower1,tower3,tower2);
      printf("\nShift top disk from tower %c to %c",tower1,tower2);
   
    TOH(d-1,tower3,tower2,tower1);
}
}
