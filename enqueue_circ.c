#include <stdio.h>
#include<stdlib.h>
#include "library.h"

void enqueue_circ ( struct node **f, struct node **r, int item )
{
    struct node *q ;


    q = malloc ( sizeof ( struct node ) ) ;
    q -> info = item ;

   
if ( *f == NULL )
        *f = q ;
    else
        ( *r ) -> link = q ;

    *r = q ;
    ( *r ) -> link = *f ;
}
