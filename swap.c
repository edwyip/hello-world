#include <stdio.h>

void swap(int *x, int *y);

int main()
{
    int a = 5;
    int b = 8;
    printf("a = %i, b = %i\n", a, b);
    
    printf("swapping...\n");
    swap(&a, &b);
    printf("swapped\n");
    
    printf("a = %i, b = %i\n, YAY!", a, b);

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}