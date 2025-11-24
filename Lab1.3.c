#include <stdio.h>

int main() {
    int num1, num2, operationCode, result ;

    printf( "Please Insert Your Number ( num1, num2, OperationCode ) : " ) ;
    if (scanf( "%d %d %d", &num1, &num2, &operationCode ) != 3 ) {
        return 1 ;
    }
    switch ( operationCode ) {
    case 1:
        result = num1 + num2 ;
        break ;
    
    case 2:
        result = num1 - num2 ;
        break ;

    case 3:
        result = num1 * num2 ;
        break ;
    
    case 4:
        result = num1 / num2 ;
        break ;

    default:
    }
    return 0 ;
}