#include <stdio.h>

int main() 
{
    int num, i;
	printf("Enter a number: ");
    scanf("%d", &num);
    printf("Multiplication Table of %d:\n", num);
    for (i = 1; i <= 100; ++i)
	printf("%d * %d = %d\n", num, i, num * i);
	return 0;
}

