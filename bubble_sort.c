#include<stdio.h>
#include "library.h"
void bubble_sort()
{
int a,i,j;
int d;
while(1)
{
printf("\n1.Use Bubble Sort.\n2.Exit\nYour choice: ");
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

for(i=0;i<a;i++)
{
 for(j=i;j<a;j++)
   {
     if(arr[i]>arr[j])
       {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
       }
    }
 }

printf("\nAfter Sorting: \n");

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
