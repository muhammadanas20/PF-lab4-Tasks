#include <stdio.h>
#include <string.h>

// A password checking system: If user enters 1234, print Access Granted else print
// Access Denied.

int main() {
    char password [10];
    printf("Enter your password: ");
    scanf("%s", password);
    if (strcmp(password, "1234") == 0) {
        printf("Access Granted\n");
    } else {
        printf("Access Denied\n");
    }
    return 0;
}