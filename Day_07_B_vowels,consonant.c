//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main()
{
    char letter,a,e,i,o,u;
    printf("Enter the letter: ");
    scanf("%c", &letter);

    if(letter == a||e||i||o||u){
    printf("It is a vowel");
} else {
    printf("It is a consonant");
}
return 0;
}
