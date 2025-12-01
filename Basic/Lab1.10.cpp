#include<stdio.h>

int main() {

    int clearanceLevel, age, isActive ;

    printf( "Enter Your Number (Level, age, Active (0 - 1) ) : " ) ;

    if (scanf( "%d %d %d", &clearanceLevel, &age, &isActive ) != 3 ) {
        return 1 ;
    }

    if ( clearanceLevel == 3 && isActive == 1 ) {
        printf( "Access Granted" ) ;
    }else if ( clearanceLevel == 2 && isActive == 1 && age >= 25 ) {
        printf( "Access Granted" ) ;
    }else {
        printf( "Access Denied" ) ;
    }

    return 0;
    
}