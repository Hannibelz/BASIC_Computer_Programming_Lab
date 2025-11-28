#include <stdio.h>

int main () {
    int x, i ;

    printf( "Enter Your Number : " ) ;
    scanf( "%d", &x ) ;

    for ( i = 1; i <= x; i++ ) {
        printf( "[%d] Hello World \n" , i ) ;
    }
}