#include<stdio.h>
#include "library.h"

void quick_sort()
{
int a,i=0;
int d;
while(1)
{
printf("\n1.Use Quick Sort.\n2.Exit\nYour choice: ");
scanf("%d",&d);
 switch(d)
 {
 case 1:
{
printf("\nHow many elements you want.");
scanf("%d",&a);
int arr[a];

for(i=0;i<a;i++)
{
printf("\nElement %d:",i+1);
scanf("%d",&arr[i]);
}

sort(arr,0,a-1);

for(i=0;i<a;i++)
{
printf("%d\n",arr[i]);
}
break;
}
case 2:
 system("reset");
sortmain();
}
}
}
