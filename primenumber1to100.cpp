#include <stdio.h>

int main() {
    int i, j, Prime;

    printf("Prime numbers are:\n");

    for (i = 2; i <= 100; i++) 
	{
        Prime = 1; 
            
        for (j = 2; j <= i / 2; j++) 
		{
            if (i % j == 0) 
			{
                Prime = 0; 
                break;
            }
        }
		
		if (Prime == 1) 
		{
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

