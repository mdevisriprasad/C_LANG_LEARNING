#include <stdio.h>

int main()
{
    char name[30];
    float cgpa;
    char grade;
    printf("ENTER YOUR NAME\nENTER YOUR CGPA\nENTER YOUR GRADE");
    scanf("%s %f %c",&name,&cgpa,&grade);
    printf("YOUR NAME IS:%s\nYOUR CGPA IS:%.2f\nYOUR GRADE IS:%c",name,cgpa,grade);

    return 0;
}