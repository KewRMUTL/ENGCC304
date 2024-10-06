#include <stdio.h>

int main() {
    int N, i ;

    printf( "Enter N : " ) ;
    scanf( "%d", &N ) ;

    int arr[ N ] ;
    
    for ( i = 0 ; i < N ; i++ ) {
        printf( "Enter value[%d] : ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }//end for

    printf( "Index: " ) ;
    for ( i = 0; i < N; i++ ) {
        printf( "%d ", i ) ;
    }//end for
    
    printf( "\n" ) ;
    printf( "Array: " ) ;
    for ( i = 0 ; i < N ; i++ ) {
        printf( "%d", arr[ i ] ) ;
        if ( i < N - 1 ) {
            printf( " # " ) ;
        }//end if
    }//end for
    printf( "\n" ) ;

    return 0 ;
}//end function
