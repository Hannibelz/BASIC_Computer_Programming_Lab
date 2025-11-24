#include <stdio.h>

int main() {

    int num1, num2, operationCode, result ;

    printf( "Please Insert Your Number ( num1, num2, OperationCode ) : " ) ;
    if (scanf( "%d %d %d", &num1, &num2, &operationCode ) != 3 ) {
        return 1 ;
    }
    switch ( operationCode )
    {
    case 1:
        result = num1 + num2 ;
        printf( "Result = %d ", result ) ;
        break ;

    case 2:
        result = num1 - num2 ;
        printf( "Result = %d ", result ) ;
        break ;
    
    case 3:
        result = num1 * num2 ;
        printf( "Result = %d ", result ) ;
        break ;

    case 4:
        if ( num2 == 0 ) {
            printf( "Error cannot Divided By 0 " ) ;
        }else {
            result = num1 / num2 ;
            printf( "Result = %d ", result ) ;
        }
        break ;

    default:
        printf( "Invalid Operation \n" ) ;
    }
    return 0 ;
}