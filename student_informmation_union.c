#include<stdio.h>
int main()
{
    union student 
    {
        int rollno;
        char name[50];
        float avg;
    };
    union student s;
    printf("Enter the student rollno.:-\n");
    scanf("%d",&s.rollno);
    printf("\n student rollno.:-%d\n",s.rollno);
    printf("Enter te student name :-\n");
    scanf("%s",&s.name);
    printf("\nstudent name :-%s\n",s.name);
    printf("Enter the student average:-\n");
    scanf("%f",&s.avg);
    printf("\n student average :%f\n",s.avg);
    return 0;
}