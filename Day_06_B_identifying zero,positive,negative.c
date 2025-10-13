//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int i;
    printf("Enter your number :");
    scanf("%d", &i);
    if(i>0){
        printf("It is positive number");
    }else if(i<0){
             printf("It is a negative number");
    }else {
    printf("It is zero");
    }
return 0;
}
