#include<stdio.h>
int main()
{
    int i,n,sum;
    printf("Enter the value of n:");
    scanf("%d", &n);
    sum = 0;
    for(int i=0; i<=n; i++){
            sum+= i;
    }

    printf("%d", sum);
    
    return 0;
}
