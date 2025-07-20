#include <stdio.h>
int main() 
{
    int a[3] = {1, 2, 3};
    int i, pos;
    printf("enter position to delete (1 to 3): ");
    scanf("%d", &pos);
	for (i = pos - 1; i < 2; i++) 
		{
            a[i] = a[i + 1];
        }
        printf("array after deletion:\n");
        for (i = 0; i < 2; i++) 
		{
            printf("%d ", a[i]);
        }
}
