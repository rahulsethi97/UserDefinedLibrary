#include<stdio.h>
#include "library.h"

void tower_of_hanoi()
{ int a;
while(1)
{
 printf("\n1.Use tower of hanoi.\n2.Exit\nYour Choice: ");
 scanf("%d",&a);
switch(a)
{
 case 1:
 {
int disk;
printf("\nEnter the number of disks: ");
scanf("%d",&disk);

if(disk<1)
  printf("\nNO disk to shift");
else
  printf("\nThere are %d disks in tower 1",disk);

TOH(disk,'1','2','3');
  printf("\n\n%d disks in tower 1 are shifted to tower 2",disk);
 }
 break;
 case 2:
 system("reset");
main_1();
break;
}
}
}
