#include <stdio.h>

int main() {

    int zoneCode ;
    float weight_kg ;
    float totalCost = 0.0 ;

    printf("Insert Your Number (Zone, Weight): ");

    if(scanf( "%d %f", &zoneCode, &weight_kg ) != 2 ) {
        return 1 ;
    }

    switch(zoneCode) {
    case 1:
        if( weight_kg <= 5 ) {
            totalCost = 50 ;
        }else if( weight_kg > 5 ) {
            totalCost =  80 ;
        }else {
            printf("Error") ;
        }
        break ;

    case 2:
        if( weight_kg <= 10 ) {
            totalCost = 150 ;
        }else if( weight_kg > 10 ) {
            totalCost =  250 ;
        }else {
            printf("Error") ;
        }
        break ;

    case 3:
        totalCost = 500 ;
        break ;
    
    default:
        printf( "Invalid Zone Code" ) ;
        break ;
    }
    
    if ( totalCost > 0.0 || zoneCode > 3 || zoneCode < 1 ) {
        printf( "%.2f \n", totalCost ) ;
    }
}