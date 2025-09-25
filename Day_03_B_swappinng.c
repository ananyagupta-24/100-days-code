#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two values");
    scanf("%d%d",&a,&b);
    temp = a;
    a = b;
    b = temp;
    printf("The value after swapping is :%d %d", a,b);
    return 0;
}
