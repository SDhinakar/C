#include<stdio.h>

struct student
{
    char name[50];
    int id;
    float marks;
};

int  main()
{
    struct student s1={"Dhina", 123, 98.5};
    struct student s2={"Raj", 124, 97.5};

    struct student s3;
    s3=s1;

    struct student s5 = {"john", 11, 67};

    struct student s4;
    printf("Enter name, id and marks of s4: ");
    scanf("%s %d %f",s4.name,&s4.id,&s4.marks);

    if(s2.id>s1.id){
        printf("s2 is gretaer than s1\n");
    }else{
        printf("s1 is gretaer than s2\n");
    } //if else can be used to compare the parameters inside the structure

    printf("Name: %s\nID: %d\nMarks: %.2f\n", s4.name, s4.id, s4.marks);
    
    printf("details of s5 : \n"); //printing the details of s5
    printf("Name: %s\nID: %d\nMarks: %.2f\n", s5.name, s5.id, s5.marks);
}