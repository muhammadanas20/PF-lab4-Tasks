#include <stdio.h>

//  A program asks the user for their age. If they are 18 or older, print &quot;Eligible to Vote&quot;,
// otherwise print &quot;Not Eligible&quot;.
int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("Eligible to Vote\n");
    } else {
        printf("Not Eligible\n");
    }
    return 0;
}