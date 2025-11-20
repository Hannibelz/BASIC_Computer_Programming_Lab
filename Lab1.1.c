// Pre-code (โค้ดบังคับ)
#include <stdio.h>

int main() {
    int N , i ;

    printf( "Please Enter Your Number : " ) ; // รับค่า N (จำนวนรอบ)
    if (scanf( "%d" , &N ) != 1 || N <= 0 ) {
            printf( "Error\n" ) ;  // Handle input failure
            printf( "N = %d" , N ) ; // แสดงจำนวนค่าที่รับเข้ามา
        return 1 ;
    }else {
        for( i = 0 ; i < N ; i++ ) {
        printf( "Hello Loop!\n" ) ; // TODO: Implement the for loop to print the message N times
        }
    }
    printf( "N = %d" ,N ) ; // แสดงจำนวนค่าที่รับเข้ามา
    return 0 ;
}