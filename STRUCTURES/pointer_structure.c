#include<stdio.h>

struct student
{
    int id;
    char name[20];
    float marks;
};

void main()
{
    struct student s1={1, "John", 90.5};
    struct student *ptr=&s1;  
    printf("info for s1 : ");
    printf("\t%d \t%s \t%.2f",(*ptr).id,ptr->name,(*ptr).marks);

    struct student s2;
    printf("\nEnter details for s2: ");
    scanf("%d %s %f", &s2.id, s2.name, &s2.marks); // input for s2
    struct student *ptr1=&s2;
    printf("%d %s %f",(*ptr1).id,ptr1->name,ptr1->marks);
} 
