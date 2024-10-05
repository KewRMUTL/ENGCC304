#include <stdio.h>

int main() {
    char name[ 50 ] ;
    int age ;

    printf( "Enter your name: " ) ;
    scanf( "%49s", name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &age ) ;

    printf( "- - - - - -\n" ) ;
    printf( "Hello %s\n", name ) ;
    printf( "Age = %d\n", age ) ;

    return 0 ;

}//end function
