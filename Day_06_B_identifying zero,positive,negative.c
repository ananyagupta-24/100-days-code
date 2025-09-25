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
