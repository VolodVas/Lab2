#include <stdio.h>
#include <math.h>
int main() {
    int x, y, z;
    float a;
    // Введення значень з клавіатури
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);
    printf("Введіть значення z: ");
    scanf("%d", &z);
    // Обчислення значення функції
    a = sqrt(x * x) * y - 14 * z;
    // Виведення результату
    printf("Значення функції a = %.1f\n", a);
    return 0;
}
