#include <stdio.h>

int main() {
    int customerType ;
    float consumption_kWh ;
    float totalBill = 0.0 ;

    printf( "Please Insert Your Number (CustomerType, kWh) :" ) ;
    if ( scanf( "%d %f", &customerType, &consumption_kWh ) != 2 ) {
        return 1 ;
    }if ( customerType == 1 && consumption_kWh <= 100 ) {
        totalBill = consumption_kWh * 3 ;
    }else if ( customerType == 1 && consumption_kWh > 100 ) {
        totalBill = consumption_kWh * 4 ;
    }else if ( customerType == 2 && consumption_kWh <= 500 ) {
        totalBill = consumption_kWh * 5 ;
    }else if ( customerType == 2 && consumption_kWh > 500 ) {
        totalBill = consumption_kWh * 6.5 ;
    }else {
        printf( "Invalid Customer Type \n" ) ;
    }if ( totalBill > 0.0 || customerType == 3 ) {
        printf( "%.2f \n", totalBill ) ;
    }
    return 0 ;
}