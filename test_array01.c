//git config --global user.name "S6519N10003"
//git config --global user.email "s6519n10003@sau.ac.th"

//git init
//git add .
//git commit -m "Version......"
//git remote ...........
//git push -u origin master

//-------------------------------------------

//git add .
//git commit -m "Version......"
//git push -u origin master
#include <stdio.h>
#define line printf("---------------------------------\n") ;

void main ()
{
    int scoreA ;
    int scoreB[5] ;
    
    float salaryIoTA ;
    float salaryIoTB[100] ;
    
    char nameA ;
    char nameB [50] ;

    scoreA = 100 ;
    printf("%d \n" ,scoreA ) ;

    scoreB [1] = 200 ;
    scoreB [4] = 400 ;
    printf("%d \n" ,scoreB[1] ) ;
    printf("%d \n" ,scoreB[4] ) ;


    salaryIoTB [29] = 10000.25 ; 
    
    salaryIoTB [99] = salaryIoTB[29] + scoreB [1] ;
    
    printf("%.2f \n" ,salaryIoTB[99] ) ;
}
