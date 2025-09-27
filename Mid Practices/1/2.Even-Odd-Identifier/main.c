#include <stdio.h>
#include <stdlib.h>
//This Code check if the number is even or odd;
int main()
{
    int num;
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("The number %d is Even\n",num);
    }
    else{
        printf("The number %d is Odd\n",num);
    }
    return 0;
}

//A number is called even if it is exactly divisible by 2.
//A number is called odd if it is not divisible by 2
//Must use "int" for this, cause for eg:4.5 is not even nor odd,
