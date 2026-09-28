#include<stdio.h>

union demo
{
    int i;
    char ch;
};


int main()
{
    union demo dobj;

    dobj.i = 65;        //A
    
    printf("%f\n", dobj.i);
    printf("%c\n", dobj.ch);
    
    return 0;
}