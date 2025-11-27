//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    enum Role r;

    for (r = ADMIN; r <= GUEST; r++) {
        if (r == ADMIN)
            printf("ADMIN: You have full access\n");
        else if (r == USER)
            printf("USER: You have limited access\n");
        else if (r == GUEST)
            printf("GUEST: You have view-only access\n");
    }

    return 0;
}
