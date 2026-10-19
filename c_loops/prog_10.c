#include<stdio.h>
int main()
{
    int marks;
    do
    {
      printf("ENTER YOUR MARKS UNDER (0-100)");
      scanf("%d",&marks);

      if (marks<0 || marks>100)
      {
      printf("INVALID MARKS PLEASE ENTER YOUR CORRECT MARKS.\n"); 
      }  
    } 
    while (marks<0 || marks>100);

    if (marks >=90)
        printf("GRADE A\n");

    else if (marks >=75)
        printf("GRADE B\n");

    else if (marks >=65)
        printf("GRADE C\n");

    else if (marks >=50)
        printf("GRADE D\n");

    else 
        printf("GRADE FAIL\n");

    return 0;
}