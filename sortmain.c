#include<stdio.h>
#include<stdlib.h>
#include "library.h"


void sortmain()
{
int a;

while(1)
{
printf("\n1.Bubble sort\n2.Quick Sort\n3.Selection Sort\n4.Exit\nYour Choice:");
scanf("%d",&a);
  switch(a)
  {
    case 1:
 system("reset");
     bubble_sort();
    break;
    case 2:
 system("reset");
     quick_sort();
    break;
    case 3:
 system("reset");
     selection_sort();
    break;
    case 4:
 system("reset");
     main_1();
    break;
   }
}
}
