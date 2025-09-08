#include <stdio.h>

// If the temperature is greater than 30°C, display "Hot Day", otherwise "Pleasant Day".
int main() {
    float temperature;
    printf("Enter the temperature in Celsius: ");
    scanf("%f", &temperature);
    if (temperature > 30.0) {
        printf("Hot Day\n");
    } else {
        printf("Pleasant Day\n");
    }
    return 0;
}