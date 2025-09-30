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
        if(num==0){
            printf("Zero is not valid");
        }
        else if(num<0){
            printf("Negative number is not valid");
        }
    }

    return 0;
}

//Q: Program that will read from the console a random number and check if it is a nonzero
//positive number. If the check is yes, it will determine if the number is a power of 2.
//If the check fails the program will check for two more cases. If the number is zero, the
//program will print “Zero is not a valid input”. Else it will print “Negative input is not valid”.

//Read from console - Take input from the user using scanf (C language).
//Random positive nonzero number - User will enter any integer that is: Greater than 0
//Determine if it is a power of 2 - Check whether that number can be written as 2^n for some integer N>=0;

//Solve: If a number is divisible by 2 repeatedly until it becomes 1, then it is a power of 2.

// to solve it, fist condition is - the number should be divisible by 2,
//second condition is, the number should be continuously divisible by 2, until it becomes 1, means the last division by 2 result must be 1,
