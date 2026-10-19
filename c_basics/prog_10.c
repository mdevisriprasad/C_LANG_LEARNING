#include<stdio.h>

int main()
{
    int age;
    char name[30];
    printf("HELLO ! \n GOOD MORNING \n");
    printf("ENTER YOUR NAME");
    fgets(name,sizeof(name), stdin);
    printf("ENTER YOUR AGE");
    scanf("%d",&age);
    printf("YOUR NAME IS %s\nYOUR AGE IS %d", name, age);

    return 0;
}