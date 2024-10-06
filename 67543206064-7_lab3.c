#include <stdio.h>

int main() {
    int N ;
    printf( "Enter N: " ) ;
    scanf( "%d", &N ) ;

    int array[ N ] ;
    
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Enter value[%d]: ", i ) ;
        scanf( "%d", &array[ i ] ) ;
    }//end for

    printf( "Index:\t" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "%2d ", i ) ;
    }//end for

    printf( "\nArray:\t" ) ;
    for ( int i = 0 ; i < N ; i++ ) {
        int isPrime = 1 ;
        if ( array[i] < 2) isPrime = 0;
        for ( int j = 2 ; j * j <= array[ i ]; j++ ) {
            if ( array[ i ] % j == 0 ) {
                isPrime = 0 ;
                break;
            }//end if
        }//end for
        if ( isPrime ) {
            printf( "%2d ", array[ i ] ) ;
        } else {
            printf( " # " ) ;
        }//end if
    }//end for
    printf( "\n" ) ;

    return 0 ;
}//end function
