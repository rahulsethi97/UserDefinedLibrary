#include<stdio.h>
#include "library.h"

void bin_search()
{
int a,i;
int d;
while(1)
{
printf("\n1.Use Binary search.\n2.Exit\nYour choice: ");
scanf("%d",&d);
 switch(d)
 {
 case 1:
{

printf("\nHow many elements you want? ");
scanf("%d",&a);
int arr[a];
printf("\n\nEnter the %d elements in sorted order.\n",a);
for(i=0;i<a;i++)
{
printf("\nElement %d:",i+1);
scanf("%d",&arr[i]);
}
int mid,beg,end,item;
beg=0;
end=a-1;
mid=(beg+end)/2;

printf("\nEnter the element to be searched: ");
scanf("%d",&item);

while(arr[mid]!=item)
   {
     if(item<arr[mid])
       {
        end=mid-1;
        mid=(beg+end)/2;
        }
      if(item>arr[mid])
       {
        beg=mid+1;
        mid=(beg+end)/2;
       }
    }

printf("\nItem found at %dth position.\n",mid+1);
}
break;
case 2:
system("reset");
main_1();
}
}
}
