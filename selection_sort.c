#include<stdio.h>
#include "library.h"
void selection_sort()
{
int a,i=0,j,k,max,temp,flag=0;;
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
  max=arr[i];
    for(j=i+1;j<a;j++)
      {
       if(arr[j]>max)
        { 
          max=arr[j];
          k=j;
          flag=1;
        }
      } 
     if(flag==1)
     {
     temp=arr[k];
     arr[k]=arr[i];
     arr[i]=temp;  
     }
  flag=0;
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

