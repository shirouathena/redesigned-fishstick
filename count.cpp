#include <stdio.h>

int main() {
    int n, i, num, pos = 0, peg = 0;
    printf("number of element:");
	scanf("%d", &n);
	printf("Enter %d numbers: ", n);
	for(i = 0; i <n; i++){
		scanf("%d", &num);
	if(num > 0)
            pos++;
        else if(num < 0)
            peg++;
        }
    

    printf("Pos numbers = %d\n", pos);
    printf("neg numbers = %d\n", peg);
}

