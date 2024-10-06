#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int play = 1, guess, winning_number ;
    int score, lower_bound, upper_bound ;

    srand( time( NULL ) ) ;

    while ( play == 1 ) {
        score = 100 ;
        lower_bound = 1 ;
        upper_bound = 100 ;
        winning_number = 42 ; 

        printf( "Do you want to play game (1=play, -1=exit) : (Score=%d)\n", score ) ;
        scanf( "%d", &play ) ;

        if ( play == -1 ) {
            break ;
        }//end if

        while ( 1 ) {
            printf( "Guess the winning number (%d-%d): ", lower_bound, upper_bound ) ;
            scanf( "%d", &guess ) ;

            if ( guess < lower_bound || guess > upper_bound ) {
                printf( "Your guess is out of the current bounds (%d-%d)! Try again.\n", lower_bound, upper_bound ) ;
                continue ;  
            }//end if

            score -= 10 ;

            if ( guess == winning_number ) {
                printf( "That is correct! The winning number is %d.\n", winning_number ) ;
                printf( "Score this game: %d\n", score ) ;
                break ;  
            } else if ( guess > winning_number ) {
                printf( "Sorry, the winning number is LOWER than %d. (Score=%d)\n", guess, score ) ; 
                upper_bound = guess - 1 ;  
            } else {
                printf( "Sorry, the winning number is HIGHER than %d. (Score=%d)\n", guess, score ) ;
                lower_bound = guess + 1 ; 
            }//end if
        }//end while
    }//end while

    return 0 ;
}//end function
