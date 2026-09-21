#include<stdio.h>

void addition(int no1,int no2)
{
    int result = 0;
    result = no1 + no2;         //Buisness Logic
    printf("Addition is : %d\n", result);
}

int main()
{
    int value1 = 0, value2= 0 ;

    printf("Enter number1: \n");
    scanf("%d", &value1);

    printf("Enter number2: \n");
    scanf("%d", &value2);

    addition(value1,value2);

    return 0;
}