#include <stdio.h>
int main() 
{
    char str[100];
    int i, len = 0, Palindrome = 1;
	printf("Enter a string: ");
    gets(str);
    while (str[len] != '\0') 
	{
        len++;
    }
    for (i = 0; i < len / 2; i++) 
	{
        if (str[i] != str[len - i - 1]) 
		{
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");
}

