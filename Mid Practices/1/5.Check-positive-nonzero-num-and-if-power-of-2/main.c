#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp;
    scanf("%d", &num);

    if(num>0){
        temp = num;
        while(temp%2==0){ // this condition means the reminder of the number have to be 0, if not, it will break the loop
            temp = temp/2; //here the temp is the result of division by 2,
        }
        if (temp==1){
            printf("%d is a power of 2",num);
        }
        else{
            printf("%d is not a power of 2",num);
        }
    }
    else{
        printf("Please enter number greater than 0");
    }

    return 0;
}

//Q: Program that will read from the console a random positive nonzero number and determine if it is a power of 2.

//Read from console - Take input from the user using scanf (C language).
//Random positive nonzero number - User will enter any integer that is: Greater than 0
//Determine if it is a power of 2 - Check whether that number can be written as 2^n for some integer N>=0;

//Solve: If a number is divisible by 2 repeatedly until it becomes 1, then it is a power of 2.

// to solve it, fist condition is - the number should be divisible by 2,
//second condition is, the number should be continuously divisible by 2, until it becomes 1, means the last division by 2 result must be 1,
