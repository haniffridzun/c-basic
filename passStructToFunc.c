#include <stdio.h>

struct student
{
    char name[50];
    int age;
};

// function prototype
void display(struct student s);

int main()
{
    struct student s1;

    printf("enter name: ");

    // read string input from user until \n'
    scanf("%[^\n]%*c", s1.name);
    printf("enter age: ");
    scanf("%d", &s1.age);

    // passing struct as an argument
    display(s1);

    return 0;
}

// function definition
void display(struct student s)
{
    printf("\ndisplaying information\n");
    printf("name: %s", s.name);
    printf("\nage: %d", s.age);
}
