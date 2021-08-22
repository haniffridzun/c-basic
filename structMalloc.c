#include <stdio.h>
#include <stdlib.h>

struct person
{
    int age;
    float weight;
    char name[30];
};

int main()
{
    struct person *ptr;
    int i, n;

    printf("enter the number of persons: ");
    scanf("%d", &n);

    // allocate memory for n numbers of struct person
    ptr = (struct person *)malloc(n * sizeof(struct person));

    for (i = 0; i < n; ++i)
    {
        printf("enter first name and age respectively: ");

        // to access members of 1st struct person
        // ptr->name and ptr->age is used

        // to access member of i-th struct person
        // (ptr+i)->name and (ptr+i)->age is used
        scanf("%s %d", (ptr + i)->name, &(ptr + i)->age);
    }

    printf("\ndisplay information\n");
    for (i = 0; i < n; ++i)
    {
        printf("name: %s\tage: %d\n", (ptr + i)->name, (ptr + i)->age);
    }

    return 0;
}