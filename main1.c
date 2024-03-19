#include <math.h>

int main() {
    int num1, num2;

    // Введення двох цілих чисел
    printf("Введіть два цілих числа: ");
    scanf("%d %d", &num1, &num2);

    // Обчислення суми квадратів чисел
    int sumOfSquares = num1 * num1 + num2 * num2; // Сума квадратів чисел

    // Обчислення подвоєного добутку чисел
    int doubleProduct = 2 * num1 * num2; // Подвоєний добуток чисел

    // Обчислення різниці першого числа та потроєного другого числа
    int difference = num1 - 3 * num2; // Різниця першого числа та потроєного другого числа

    // Виведення результатів
    printf("Сума квадратів: %d\n", sumOfSquares);
    printf("Подвоєний добуток: %d\n", doubleProduct);
    printf("Різниця: %d\n", difference);

    return 0;
}
