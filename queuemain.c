#include <stdio.h>
#include<stdlib.h>
#include "library.h"

void queuemain()
{
  int a;
  printf("\n1.Basic Queue.\n2.Circular Queue.\n3.Exit.\nYour Choice: ");
  scanf("%d",&a);
  switch(a)
  {
   case 1:
      system("reset");
     queue();
     break;
   case 2:
   system("reset");
     circ_queue();
     break;
   case 3:

     system("reset");
     main_1();
   }
}
