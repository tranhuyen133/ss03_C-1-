#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // C�ng thuc chuyen doi tu Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("Nhiet do theo do Fahrenheit la: %.2f\n", fahrenheit);

    return 0;
}

