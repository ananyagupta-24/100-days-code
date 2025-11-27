//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    for (r = ADMIN; r <= GUEST; r++) {
        printf("%s = %d\n", roleNames[r], r);
    }

    return 0;
}


