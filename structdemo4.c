#include<stdio.h>
#pragma pack(1)

struct demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    struct demo dobj1;
    struct demo dobj2;

    struct demo *dp = NULL;
    
    dp = &dobj2;

    // Direct Accessing Operator
    dobj1.i = 11;
    dobj1.ch = 'A';
    dobj1.f = 90.99f;
    
    // Indirect Accessing Operator
    dp -> i = 21;
    dp -> ch = 'P';
    dp -> f = 91.99f;

    printf("%d\n", dobj1.i);
    printf("%d\n", dp -> i);
    printf("%f\n", dp -> f);
    return 0;
}