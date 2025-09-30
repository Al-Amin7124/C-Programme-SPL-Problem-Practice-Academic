#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter value of X & Y\n");
    scanf("%d%d",&x,&y);

    if(x==y){
        printf("%d is Equal to %d",x,y);
    }
    else if(x>y){
        printf("%d is Greater than %d",x,y);
    }
    else if(x<y){
        printf("%d is Less than %d",x,y);
    }
    else{
        printf("Please enter valid number");
    }

    return 0;
}

//Q:
//Program that will take two numbers X & Y as inputs and decide whether X is greater
//than/less than/equal to Y.

//solve
//simple condition, only using =,>,< for identifying the value,
