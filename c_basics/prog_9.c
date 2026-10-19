#include<stdio.h>

int main()
{
    int age;
    char name[30];
    printf("HELLO ! \n GOOD MORNING \n");
    printf("ENTER YOUR NAME");
    scanf("%s",&name);
    printf("ENTER YOUR AGE");
    scanf("%d",&age);
    printf("YOUR NAME IS %s \n YOUR AGE IS %d", name, age);

    return 0;
}