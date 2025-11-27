//Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {
    enum Month m;

    for (m = JANUARY; m <= DECEMBER; m++) {
        if (m == JANUARY) printf("JANUARY has 31 days\n");
        else if (m == FEBRUARY) printf("FEBRUARY has 28 or 29 days\n");
        else if (m == MARCH) printf("MARCH has 31 days\n");
        else if (m == APRIL) printf("APRIL has 30 days\n");
        else if (m == MAY) printf("MAY has 31 days\n");
        else if (m == JUNE) printf("JUNE has 30 days\n");
        else if (m == JULY) printf("JULY has 31 days\n");
        else if (m == AUGUST) printf("AUGUST has 31 days\n");
        else if (m == SEPTEMBER) printf("SEPTEMBER has 30 days\n");
        else if (m == OCTOBER) printf("OCTOBER has 31 days\n");
        else if (m == NOVEMBER) printf("NOVEMBER has 30 days\n");
        else if (m == DECEMBER) printf("DECEMBER has 31 days\n");
    }

    return 0;
}

