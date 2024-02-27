#include<stdio.h>

typedef struct stu  //typedef is used to give a type a new name
{
    int id;
    char name[20];
    float marks;
} student;

void main()
{
    student s1={1, "John", 90.5};
    student *ptr=&s1;  
    printf("info for s1 : ");
    printf("\t%d \t%s \t%.2f",(*ptr).id,ptr->name,(*ptr).marks);

    student s2;
    printf("\nEnter details for s2: ");
    scanf("%d %s %f", &s2.id, s2.name, &s2.marks); // input for s2
    student *ptr1=&s2;
    printf("%d %s %f",(*ptr1).id,ptr1->name,ptr1->marks);
}
