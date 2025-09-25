#include<stdio.h>
#include<math.h>
int main()
{
    double simpleintrest,Compoundintrest,principal,amount,rate,time;

    printf("Enter the value of principal");
    scanf("%lf", &principal);
    printf("Enter the value of rate : ");
    scanf("%lf", &rate);
    printf("Enter the value of time:");
    scanf("%lf", &time);

      simpleintrest = principal*rate*time/100;
    printf("The SI value is: %.2f\n",simpleintrest );


    amount = principal * pow((1+rate/100),time);
    Compoundintrest= amount-principal;
    printf("The CI value is: %.2f", Compoundintrest);
    return 0;
}

