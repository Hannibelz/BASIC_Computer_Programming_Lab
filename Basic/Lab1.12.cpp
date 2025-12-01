#include<stdio.h>

int main () {
    int planCode ;
    float dataUsage_GB ;
    float totalBill = 0.0 ;

    printf( "Enter Your Number (PlanCode, Data) : " ) ;

    if (scanf( "%d %f", &planCode, &dataUsage_GB ) != 2 ) {
        return 1 ;
    }
    
    if ( planCode == 1 && dataUsage_GB > 10 ) {
        totalBill = 299 + 10 * (dataUsage_GB - 10 ) ;
    } else if ( planCode == 1 && dataUsage_GB <= 10 ) {
        totalBill = 299 ;
    } 
    
    if ( planCode == 2 && dataUsage_GB > 20 ) {
        totalBill = 599 + 50 + 5 * (dataUsage_GB - 20 ) ;
    } else if ( planCode == 2 && dataUsage_GB <= 20 ) {
        totalBill = 599 ;
    }

    if ( planCode == 1 || planCode == 2 ) {
        printf( "%.2f \n", totalBill ) ;
    } else {
        printf( "Invalid Plan Code \n" ) ;
    }
    return 0  ;
}