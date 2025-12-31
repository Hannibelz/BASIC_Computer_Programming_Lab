#include <stdio.h>

int main(){
    int N, i, quantity ;
    float unitPrice, itemCost, grandTotal, discount = 0.0 ;

    printf("Enter Your Total Item : ") ;
    if (scanf("%d", &N) != 1 ) {
        return 1 ;
    }
    
    for (i = 0; i < N; i++) {
        printf("Enter Your unitprice, quantity : ") ;
        scanf("%f %d", &unitPrice, &quantity) ;

        itemCost = unitPrice * quantity ;

        if (unitPrice >= 1000.0) {
            discount = itemCost * 0.10 ;
        } else {
            discount = 0.0 ;
        }

        grandTotal += (itemCost - discount) ;
    }

    printf("Grand Total: %.2f\n", grandTotal) ;

    return 0 ;
}