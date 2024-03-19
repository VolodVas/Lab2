#include <stdio.h>

int main() {
    // Задані сталі величини
    int a = 6, b = 0, c = 11;

    // Обчислення виразу
    float y = ((a * b + a * c - b * c) / (2 * a - b)) - (5 / (float)(a + b));

    // Виведення результату
    printf("Значення виразу y = %.2f\n", y);

    return 0;
}
