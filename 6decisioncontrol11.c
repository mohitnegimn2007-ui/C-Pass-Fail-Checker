// Write  a program to check whether a student has passed or failed.To pass ,a student requires a total of 40% and at least 33% in each subject.
//Assume there are three subjects and take the marks as input from the user.

#include <stdio.h>
void main()
{
    int Physics,Chemistry,Maths,marks_obtained,total_marks,marks_each;

    float percentage_total,percentage_physics,percentage_chemistry,percentage_maths;

    printf("Enter Physics Marks:");
    scanf("%d \n",&Physics);

    printf("Enter Chemistry Marks:");
    scanf("%d\n",&Chemistry);

    printf("Enter Maths marks:");
    scanf("%d\n",&Maths);

    marks_obtained=Physics+Chemistry+Maths;

    printf("Enter Maximum marks:");
    scanf("%d \n",&total_marks);

    marks_each=total_marks/3;

    percentage_physics=(Physics/marks_each)*100;

    percentage_chemistry=(Chemistry/marks_each)*100;

    percentage_maths=(Maths/marks_each)*100;

    percentage_total=(marks_obtained/total_marks)*100;

    if(percentage_total>=40 && percentage_chemistry>=3 && percentage_maths>=33 && percentage_physics>=33)
        printf("YOU ARE PASSED!!!");
    else
        printf("YOU ARE FAILED!!!");
    
}
    