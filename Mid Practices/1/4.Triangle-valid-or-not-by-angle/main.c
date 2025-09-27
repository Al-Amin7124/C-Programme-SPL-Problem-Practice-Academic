#include <stdio.h>
#include <stdlib.h>
//A triangle is valid if the sum of all the three angles is equal to 180 degrees.
int main()
{
    int a,b,c,sum;
    printf("Enter angle value\n");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;
    if(a>0 && b>0 && c>0 && sum==180){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    return 0;
}
