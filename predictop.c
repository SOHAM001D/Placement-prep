#include<stdio.h>

int main() 
{
    // int arr[6] = {10, 20, 30,};
    // int no = 2;
    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[no]);
    // printf("%d\n", arr[3-1]);
    // printf("%d\n", arr);
    // printf("%d\n", arr+1);
    // printf("%d\n", &(arr[5]));
    // printf("%d\n", (&arr)+1);
    // return 0;

    double no = 3.14;
    double *a = &no;
    double **b = &a;
    double ***c = &b;
    double ****d = &c;

    printf("%d\n", sizeof(no));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(b));
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(d));
    printf("%d\n", sizeof(**d));
    printf("%d\n", sizeof(****d));
    printf("%d\n", sizeof(*a));
    printf("%d\n", sizeof(***c));
    printf("%d\n", sizeof(**c));
}
