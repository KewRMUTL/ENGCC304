#include <stdio.h>

int main() {
    int value ;

    printf( "Enter value: " ) ;
    scanf( "%d", &value ) ;

    printf( "Series: " ) ;
    for( int i = value ; i >= 0 ; i -= 2 ) {
        printf( "%d ", i ) ;
    }//end for

    printf( "\n" ) ;

    return 0 ;

}//end function
