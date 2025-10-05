//Write a program to print the following pattern:

//*

//***

//*****
//*******
//***

//*

#include <stdio.h>

int main() {
    int stars[] = {1, 3, 5, 7, 3, 1};
    int n = sizeof(stars) / sizeof(stars[0]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*");
        }
        printf("\n\n");  
    }

    return 0;
}

