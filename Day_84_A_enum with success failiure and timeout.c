//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    for (s = SUCCESS; s <= TIMEOUT; s++) {
        if (s == SUCCESS)
            printf("SUCCESS: Operation completed successfully\n");
        else if (s == FAILURE)
            printf("FAILURE: Operation failed\n");
        else if (s == TIMEOUT)
            printf("TIMEOUT: Operation timed out\n");
    }

    return 0;
}
