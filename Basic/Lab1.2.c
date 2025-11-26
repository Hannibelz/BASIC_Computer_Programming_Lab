#include <stdio.h>

int main() {
    int score ;

    printf( "Insert Your score : " ) ;
    if (scanf( "%d", &score ) != 1 ) {
        return 1 ;
    }else if ( score >= 80 && score <= 100 ) {
        printf( "Grade A" ) ;
    }else if ( score >= 70 && score <= 79 ) {
        printf( "Grade B" ) ;
    }else if ( score >= 60 && score <= 69 ) {
        printf( "Grade C" ) ;
    }else if ( score >= 50 && score <= 59 ) {
        printf( "Grade D" ) ;
    }else if ( score <= 50 && score >= 0 ) {
        printf( "Grade F" ) ;
    }
    else {
        printf( "Your Score Not In Range" ) ;
    }
    return 0 ;
}