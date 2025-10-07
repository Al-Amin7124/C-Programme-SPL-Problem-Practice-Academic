#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c;
    int result;

    printf("Please enter value of a and b : \n");
    scanf("%f%f",&a,&b);
    printf("Choice Operator:\n 1. '+'\n 2. '-'\n 3. '*'\n 4.'/'\n Enter Your Choice : \n");
    scanf(" %f", &c);

    if(c == 1){
        result=a+b;
        printf("Addition: %d",result);
    }else if(c == 2){
        result=a-b;
        printf("Subtraction: %d",result);
    }else if(c == 3){
        result=a*b;
        printf("Multiplication: %d",result);
    }else if(c == 4){
        result=a/b;
        printf("Quotient: %d",result);
    }

    return 0;
}


//Q
//Program that will construct a menu for performing arithmetic operations. The user will give
//two real numbers (a, b) on which the arithmetic operations will be performed and an integer
//number (1 <= Choice <= 4) as a choice. Choice-1, 2, 3, 4 are for performing addition,
//subtraction, multiplication, division (quotient) respectively.
