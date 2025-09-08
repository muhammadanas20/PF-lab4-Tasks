#include <stdio.h>

// A password checking system: If user enters 1234, print Access Granted else print
// Access Denied.

int main() {
    int password;
    printf("Enter your password: ");
    scanf("%d", &password);
    if (password == 1234) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
    return 0;
}