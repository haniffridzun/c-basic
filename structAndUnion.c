#include <stdio.h>

union unionJob
{
    // define a union
    char name[32]; // 32 bytes
    float salary;  // 4 bytes
    int workerNo;  // 4 bytes
} uJob;

struct structJob
{
    char name[32]; // 32 bytes
    float salary;  // 4 bytes
    int workerNo;  // 4 bytes
} sJob;

int main()
{
    printf("size of union = %ld bytes", sizeof(uJob));
    printf("\nsize of structure = %ld bytes", sizeof(sJob));
    return 0;
}

// sJob is 40 bytes --- total size of all elements 32 + 4 + 4
// uJob is 32 bytes --- because of union variable always be the size of its
//                      largest element