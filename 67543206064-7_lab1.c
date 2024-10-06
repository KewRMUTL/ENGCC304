#include <stduio.h>

int main() {
    char name[ 50 ] ;
    int  age = 0 ;
    printf( "Enter your name: " ) 
    scanf( "%s", name ) ;
    printf( "Enter your age: " ) ;
    scanf( "%d", &age ) ;
    print( "- - - - - -\n" ) ;
    printf( "Hello %s \n", name ) ;
    printf( "Age = %d\n", age ) ;
    
}//end function
