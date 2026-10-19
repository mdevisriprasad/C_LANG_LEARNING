#include<stdio.h>
int main()
{
    int attendance;
    printf("ENTER YOUR ATTENDANCE");
    scanf("%d",&attendance);
    if (attendance>90)
    {
        printf("YOUR ATTENDANCE IS EXCELLANT",attendance);
    }
    else if (attendance>75)
    {
        printf("YOUR ATTENDANCE IS BEST",attendance);
    }
    else if (attendance>65)
    {
        printf("YOUR ATTENDANCE IS GOOD",attendance);
    }
    else
    {
        printf("YOUR ARE DETAINED PLEASE MAKE SURE YOUR ATTENDANCE WILL IN ABOVE 75 OR BELOW 60\
             \n IMEADATELY MEET YOUR HOD AND MAKE YOUR SHEADULE TO ATTEND TO COLLEGE DAILY");
    }
    
    return 0;
    
}