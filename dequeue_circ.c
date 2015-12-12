#include <stdio.h>
#include<stdlib.h>
#include "library.h"




void dequeue_circ ( struct node **f, struct node **r )
{
    struct node *q ;
    


if ( *f == NULL )
        printf ( "queue is empty" ) ;
    else
    {
        if ( *f == *r )
        {
            free ( *f ) ;
            *f = NULL ;
            *r = NULL ;
        }
        else
        {
      

            q = *f ;
            *f = ( *f ) -> link ;
            ( *r ) -> link = *f ;
            free ( q ) ;
        }
    }
}
