#include <stdio.h>
#define line printf("---------------------------------\n") ;

void main ()
{
    int num[5] ;
    num[0] = 10 ;
    num[1] = 20 ;
    num[2] = 30 ;
    num[3] = 40 ;
    num[4] = 50 ;
    
    printf("box 1 : %d\n" , num[0])  ;
    printf("box 2 : %d\n" , num[1])  ;
    printf("box 3 : %d\n" , num[2])  ;
    printf("box 4 : %d\n" , num[3])  ;
    printf("box 5 : %d\n" , num[4])  ;
}
