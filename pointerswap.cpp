#include <stdio.h>
void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main() 
{
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("before swapping: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("after swapping: num1 = %d, num2 = %d\n", num1, num2);
}
