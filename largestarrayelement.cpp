#include <stdio.h>
int main() 
{
    int n, i, max;
    printf("Enter array size: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max = a[0];
    for(i=1;i<n;i++)
        if(a[i]>max)
            max = a[i];
    printf("Largest: %d\n", max);
    return 0;
}
