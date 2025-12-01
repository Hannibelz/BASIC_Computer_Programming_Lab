#include<stdio.h>

int main () {

    int categoryCode ;
    float price_before_vat ;
    float totalBill = 0.0 ;
    float vatAmount = 0.0 ;

    printf( "Enter Your Number (Price, Category) :" ) ;

    if ( scanf( "%f %d", &price_before_vat, &categoryCode ) != 2 ) {
        return 1 ;
    }

    switch ( categoryCode ) {
    case 1:
        totalBill = price_before_vat * 1.07 ;
        vatAmount = totalBill - price_before_vat ;
        break ;

    case 2:
        totalBill = price_before_vat ;
        vatAmount = totalBill - price_before_vat ;
        break ;
    
    case 3:
        totalBill = price_before_vat * 1.15 ;
        vatAmount = totalBill - price_before_vat ;
        break ;
    }

    if ( categoryCode >= 1 && categoryCode <= 3 ) {
        vatAmount = totalBill - price_before_vat ;
        printf( "Vat Amount : %.2f \n", vatAmount ) ;
        printf( "Total Price : %.2f \n", totalBill ) ;
    } else {
        printf( "Invalid Category \n" ) ;
    }
    return 0 ;
}