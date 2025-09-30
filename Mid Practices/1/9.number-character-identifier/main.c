#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter the character : \n");
    scanf("%c",&ch);

    if((ch>='A'&& ch<='Z')||(ch>='a'&& ch<='z')){
        printf("Alphabet");
    }else if(ch>='0' && ch<='9'){
        printf("Number");
    }else{
        printf("Special Character");
    }
    return 0;
}

//Question:
//Program that will categorize a single character that is entered at the terminal, whether it is
//an alphabet, a digit or a special character.
//(Restriction: Without math.h)

//solve
//we will solve it using ASCII value
//When the value is inside '', the compilers read it as ASCII value, each character/number has its unique ASCII value,
//we will use char, cause it takes 8 bit while int is 4 bit,

//ASCII Value:
//'A' - 65
//'Z' - 90
//'a' - 97
//'z' - 122
