#include<stdio.h>
int main()
{
    int marks[5]={97,98,95,91,94};
    int memory_of_array,length_of_array;
    memory_of_array = sizeof(marks);
    printf("\n size of the marks array %d\n\n",memory_of_array);
    length_of_array = sizeof(marks)/sizeof(marks[0]);
    printf("\n length of the marks array %d\n\n",length_of_array);
    
    printf("THE VALUE OF THE STUDENT 1 IS %d\n",marks[0]);
    printf("THE VALUE OF THE STUDENT 2 IS %d\n",marks[1]);
    printf("THE VALUE OF THE STUDENT 3 IS %d\n",marks[2]);
    printf("THE VALUE OF THE STUDENT 4 IS %d\n",marks[3]);
    printf("THE VALUE OF THE STUDENT 5 IS %d\n",marks[4]);

    printf("THE VALUE OF THE STUDENT 5 IS %d\n",marks[5]);

    return 0;
}