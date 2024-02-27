#include<stdio.h>

struct student
{
    int id;
    char name[20];
    float marks;
};

int main()
{
    struct student s[3];
    
    printf("Enter details for 3 students:\n");
    
    for(int i=0; i<3; i++){
        printf("Enter name, id and marks of s[%d]: ", i);
        scanf("%d %s %f", &s[i].id, s[i].name, &s[i].marks); 
    }
    
    printf("\nStudent details:\n");
    
    for(int i=0; i<3; i++){
        printf("ID: %d\nName: %s\nMarks: %.2f\n", s[i].id, s[i].name, s[i].marks);
    }
    
    return 0;
}