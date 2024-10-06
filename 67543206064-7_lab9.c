#include <stdio.h>

int main() {
    int N, i ;
  
    printf( "Enter N : " ) ;
    scanf( "%d", &N ) ;
    
    int array[ N ] ;
    
    for ( i = 0 ; i < N ; i++ ) {
        printf( "Enter value[ %d ] : ", i ) ;
        scanf( "%d", &array[ i ]);
    }//end for
    
    printf( "Index: " ) ;
    for ( i = 0 ; i < N ; i++ ) {
        printf( "%d ", i ) ;
    }//end for

    printf( "\n" ) ;
    
    printf( "Array: " ) ;
    for ( i = 0 ; i < N ; i++ ) {
        if ( i < N - 1 ) {
            printf( "%d # ", array[ i ] ) ;
        } else {
            printf( "%d", array[ i ] ) ;
        }//end if
    }//end for

    printf( "\n" ) ;

    return 0 ;

}//end function
