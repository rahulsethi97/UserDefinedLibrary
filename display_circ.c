#include <stdio.h>
#include<stdlib.h>
#include "library.h"





void display_circ ( struct node *f )
{
    struct node *q = f, *p = NULL ;


while ( q != p )
    {
        printf ( "%d\t", q -> info ) ;

        q = q -> link ;
        p = f ;
    }
}
