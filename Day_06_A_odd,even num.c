//Write a program to input an integer and check whether it is even or odd using if–else.
#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number: ");

    scanf("%d", a);
    if( a % 2 == 0){
        printf("This is an even number");
    }else{
        printf("It is an odd number");
    }
    return 0;
}
