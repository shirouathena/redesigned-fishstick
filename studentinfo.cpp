#include <stdio.h>
struct Student 
{
    char name[50];
    int age;
    float marks;
};
int main() 
{
    struct Student s;
    printf("Enter name, age, marks: ");
    scanf("%s %d %f", s.name, &s.age, &s.marks);
    printf("Name:%s Age:%d Marks:%.2f\n", s.name, s.age, s.marks);
}
