#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num;
    scanf("%f", &num);

    if(num >=0){
            printf("The number %.2f is Positive", num);

    }
    else{
            printf("The number %.2f is Negetive", num);

    }

    return 0;
}

//This code identify whether the input number is positive or not,
//it uses simple if condition to check whether the number is 0 or greater than 0;
