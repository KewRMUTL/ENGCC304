#include <stdio.h>
int main () {
    char charlactrer = 0 ;
    int integer1 , integer2 = 0 ;
    float floatNumber = 0 ;
    char string [ 50 ] ;

    printf ( "Enter a character: \n" ) ;
    scanf ( "%c", &charlactrer ) ;
    printf ( "Enter two integers: \n" ) ;
    scanf ( "%d %d", &integer1 , &integer2 ) ;
    printf ( "Enter a floating-point number: \n" ) ;
    scanf ( "%f", &floatNumber ) ;
    printf ( "Enter a string: \n" ) ;
    scanf ( "%s", string ) ;

    printf( "You entered character: %c\n", charlactrer ) ;
    printf( "You entered integers: %d and %d\n", integer1 , integer2 ) ;
    printf( "You entered floating-point number: %.2f\n", floatNumber ) ;
    printf( "You entered string: %s\n", string) ;

    return 0 ;

}//end function
