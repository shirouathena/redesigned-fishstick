#include <stdio.h>
int main() 
{
    int a[5] = {1, 2, 3, 4};
    int i, pos, value;
    printf("enter position to insert (1 to 5): ");
    scanf("%d", &pos);
    printf("enter value to insert: ");
    scanf("%d", &value);
    for (i = 4; i >= pos; i--) 
	{
        a[i] = a[i - 1];
    }
    a[pos - 1] = value;
	printf("array after insertion:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", a[i]);
    }
}
