#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter year\n");
    scanf("%d",&year);

    if(year%4==0 && year%100!=0){
        printf("The year %d is leap year",year);
    }else if (year%400==0){
        printf("The year %d is leap year",year);
    }else{
        printf("The year %d is not leap year",year);
    }


    return 0;
}

//Q
//Program that will decide whether a year is leap year or not.

//Solve: if ( Year % 4 == 0 && year % 100 != 0 ) || ( Year % 400 ==0 )

//reminder by 4 must be zero, but by 100 must not be zero, if yes then it is leap year,
// if reminder by 400 is zero alone, the year will be leap year too.

//Leap year rules
//1. Divisible by 4 - leap year
//2. BUT if divisible by 100 - not a leap year
//3. BUT if divisible by 400 - leap year again
