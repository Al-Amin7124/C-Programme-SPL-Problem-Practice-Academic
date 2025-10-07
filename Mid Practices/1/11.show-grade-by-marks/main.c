#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mark;
    scanf("%f",&mark);

    if(mark <= 100 && mark >= 90){
        printf("Grade: A");
    }else if(mark <= 89 && mark >= 86){
        printf("Grade: A-");
    }else if(mark <= 85 && mark >= 82){
        printf("Grade: B+");
    }else if(mark <= 81 && mark >= 78){
        printf("Grade: B");
    }else if(mark <= 73 && mark >= 70){
        printf("Grade: C+");
    }else if(mark <= 69 && mark >= 66){
        printf("Grade: C");
    }else if(mark <= 65 && mark >= 62){
        printf("Grade: C-");
    }else if(mark <= 61 && mark >= 58){
        printf("Grade: D+");
    }else if(mark <= 57 && mark >= 55){
        printf("Grade: C-");
    }else if(mark < 55){
        printf("Grade: F");
    }else{
        printf("Please Enter Value Between 0 to 100");
    }

    return 0;
}


//Q
//Marks  Letter-Grade Marks  Letter-Grade Marks        Letter Grade
//90-100 A            70-73     C+        Less than 55    F
//86-89  A-           66-69     C
//82-85  B+           62-65     C
//78-81  B            58-61     D+
//74-77  B            55-57     D
