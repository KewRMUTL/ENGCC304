#include <stdio.h>

int main() {
    char empID[ 11 ] ;
    int workingHours ;
    float salaryPerHour, totalSalary ;

    printf( "Input the Employees ID (Max. 10 chars): " ) ;
    scanf( "%10s", empID ) ;

    printf( "Input the working hrs: " ) ;
    scanf( "%d", &workingHours ) ;  // รับจำนวนชั่วโมงการทำงาน

    printf( "Salary amount/hr: " ) ;
    scanf( "%f", &salaryPerHour ) ;

    totalSalary = workingHours * salaryPerHour ;
    printf( "Employees ID = %s\n", empID ) ;
    printf( "Salary = U$ %.2f\n", totalSalary ) ;

    return 0 ;

}//end function
