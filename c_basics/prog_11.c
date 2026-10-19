#include <stdio.h>

int main()
{
    char name_1[30];
    char name_2[30];
    printf("HELLO !\nGOOD MORNING ALL\n");
    printf("ENTER YOUR NAME");
    scanf("%s",&name_1);
    printf("ENTER YOUR FRIEND NAME");
    scanf("%s",&name_2);
    printf("THANK YOU !\nYOUR NAME IS %s\nYOUR FRIEND NAME IS %s\
        \nBOTH %s and %s ARE BEST FRIENDS",name_1,name_2,name_2,name_1);

    return 0;
}