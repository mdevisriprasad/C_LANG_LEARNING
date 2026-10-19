#include<stdio.h>
 int main()
 {
    FILE *fp;

    fp = fopen("student.txt","w");

    if(fp == NULL)
    {
        printf("unable to create file.\n");
        return 1;
    }
    fprintf(fp,
            "Today is the last day of C programming!\n"
            "I learned and understood C during these 12 days.\n"
            "Now I should practice more problems in C "
            "to become expert.\n"
        
            );

    fclose(fp);
    
    printf("Data written successfully.\n");

    return 0;
 }