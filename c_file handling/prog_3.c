#include<stdio.h>
int main()
{
    FILE *fp;
    int roll;
    char name[30];
    float marks;

    fp = fopen("student_marks_data.txt","w");

    if(fp == NULL)
    {
        printf("unable to open file");
        return 1;
    }

    printf("Enter Roll Number :");
    scanf("%d",&roll);

    getchar();

    printf("Enter Name :");
    fgets(name, sizeof(name), stdin);

    printf("Enter Marks :");
    scanf("%f",&marks);

    fprintf(fp, "%d\n", roll);
    fprintf(fp, "%s", name);
    fprintf(fp, "%.2f\n", marks);

    fclose(fp);

    printf("Student details saved successfully.\n");

    return 0;
}