#include<stdio.h>
#pragma pack(1)     //1 or 2 or 4 or 8 can be written at pack(__)

struct demo
{
    int i;
    char ch;
    float f;
};

int main()
{
    printf("%d\n", sizeof(struct demo));
    return 0;
}