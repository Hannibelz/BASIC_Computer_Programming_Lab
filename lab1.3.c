#include <stdio.h>

int main() {

    int num1, num2, operationCode, result ;

    printf( "Please Insert Your Number ( num1, num2, OperationCode ) : \n" ) ;
    if (scanf( "%d %d %d", &num1, &num2, &operationCode ) != 3 ) {
        return 1 ;
    }
    switch ( operationCode )
    {
    case 1:
        result = num1 + num2 ; 
        printf( "Result = %d \n", result ) ;
        break ;

    case 2:
        result = num1 - num2 ;
        printf("Result = %d \n", result ) ;
        break ;
    
    case 3:
        result = num1 * num2 ;
        printf("Result = %d \n", result ) ;
        break ;

    case 4:
        result = num1 / num2 ;
        printf("Result = %d \n", result ) ;
        break ;

    default:
        printf( "Invalid Operation" ) ;
    }
    return 0 ;
}
