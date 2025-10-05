//Write a program to print the following pattern:
//*
//***
//*****
//*******
//*********
//*******
//*****
//***
//*
#include <stdio.h>

int main() {
    int maxStars = 9; 
   
    for (int stars = 1; stars <= maxStars; stars += 2) {
        for (int i = 0; i < stars; i++) {
            printf("*");
        }
        printf("\n");
    }

    for (int stars = maxStars - 2; stars >= 1; stars -= 2) {
        for (int i = 0; i < stars; i++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
