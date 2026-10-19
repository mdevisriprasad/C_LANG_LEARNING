#include<stdio.h>
int main()
{
    int marks;
    printf("ENTER ANY NUMBER");
    scanf("%d",&marks);
    if (marks<0 || marks>100)
    {
        printf("this is a invalid number ENTER CORRECT NUMBER %d\n",marks);
    }
    else if (marks>90)
    {
        printf("GRADE A \n PASS");
    
    }
    else if (marks>80)
    {
        printf("GRADE B \n PASS");
    }
    else if (marks>70)
    {
        printf("GRADE C \n PASS");
    }
    else if (marks>60)
    {
        printf("GRADE D \n PASS");
    } 
    else if (marks>50)
    {
        printf("GRADE E \n PASS");
    }
    else
    {
        printf("GRADE fAIL\n");
    }

    return 0;

}