#include <stdio.h>
#include<stdlib.h>
#include "library.h"




void circ_queue( )
{
    struct node *front, *rear ;
    int a,i,n,item;
    front = rear = NULL ;
  while(1)
  {
    printf("\n1.Create a circular queue.\n2.Insert.\n3.Delete an element.\n4.Display.\n5.Exit.\nYour Choice: ");
    scanf("%d",&a);
    switch(a)
   {
    case 1:
     printf("\nHow many elements you want? ");
     scanf("%d",&n);
     for(i=0;i<n;i++)
      {
        printf("\nEnter the element: ");
        scanf("%d",&item);
        enqueue_circ ( &front, &rear,item) ;
     }
     break;
    case 2:
        printf("\nEnter the element: ");
        scanf("%d",&item);
        enqueue_circ ( &front, &rear,item) ;
        break;
    case 3:
        dequeue_circ ( &front, &rear ) ;
        printf("\nElement deleted");
        break;
    case 4:
    display_circ ( front ) ;
    break;
    case 5:
    system("reset");
    queuemain();
  }
 }
}
