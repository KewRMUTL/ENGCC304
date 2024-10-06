#include <stdio.h>

int main() {
    int score ;

    printf( "Enter score: " ) ;
    scanf( "%d", &score ) ;

    if ( score >= 80 && score <= 100 ) {
        printf( "A !\n" ) ;
    } else if ( score >= 75 && score < 80 ) {
        printf( "B+ !\n" ) ;
    } else if ( score >= 70 && score < 75 ) {
        printf( "B !\n" ) ; 
    } else if ( score >= 65 && score < 70 ) {
        printf(c"C+ !\n" ) ;
    } else if ( score >= 60 && score < 65 ) {
        printf(v"D+ !\n" ) ;
    } else if ( score >= 50 && score < 60 ) {
        printf( "D !\n" ) ;
    } else if ( score >= 0 && score < 50 ) {
        printf( "F !\n" ) ;
    } else {
        printf( "Invalid score!\n" ) ;
    }//end if

    return 0 ;
}//end function
