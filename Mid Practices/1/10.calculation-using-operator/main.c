#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,result;
    char op;
    printf("Enter expression (<number1> <operator> <number2>): \n");
    scanf("%f %c %f",&num1,&op,&num2);

    if(op == '+'){
        result=num1+num2;
        printf("Sum: %.2f",result);
    }else if(op == '-'){
        result=num1-num2;
        printf("Sum: %.2f",result);
    }else if(op == '*'){
        result=num1*num2;
        printf("Sum: %.2f",result);
    }else if(op == '/'){
        result=num1/num2;
        printf("Sum: %.2f",result);
    }

    return 0;
}

//Program that will evaluate simple expressions of the form-
//<number1> <operator> <number2>
//; where operators are (+, - , *, /)
//And if the operator is “/”, then check if <number2> nonzero or not.
