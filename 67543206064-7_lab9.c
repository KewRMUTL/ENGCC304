#include <stdio.h>

int main() {
    int N, i ;

    printf( "Enter N: " ) ;
    scanf( "%d", &N ) ;

    int arr[ N ] ;

    for ( i = 0 ; i < N ; i++) {
        printf( "Enter value[%d]: ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }//end for

    printf( "Index: " ) ;
    for ( i = 0 ; i < N ; i++ ) {
        printf( "%d ", i ) ;
    }//end for
    
    printf( "\n" ) ;

    printf( "Array: " ) ;
    int first = 1;
    for ( i = 0; i < N ; i++ ) {
        if ( arr[ i ] > 0 && arr[ i ] <= 23 ) {
            if ( !first ) {
                printf( " # " ) ;
            }//end if
            
            printf( "%d", arr[ i ] ) ;
            first = 0 ;
        }//end if
        
    }//end for
    
    printf( "\n" ) ;

    return 0 ;
}//end function
