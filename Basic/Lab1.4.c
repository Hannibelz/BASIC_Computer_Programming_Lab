#include <stdio.h>

int main() {
    int N, sum = 0, i ;
    
    printf( "Please Insert Your Number : " ) ;
    if( scanf( "%d", &N ) != 1 ) {
        return 1;
    }else {
        for (i = 0; i <= N ; i++)
        {
            sum += i ;
        }
    }
    printf( "Sum : %d \n", sum ) ;
    return 0 ;
}