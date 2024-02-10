#include <stdio.h>
#include <math.h>

#include "function.h"

int main() {
    int mode = 0;
    printf("Выберите режим калькулятора:\n1: Обычный\n2: Инженерный(Логарифмы)\n");
    scanf("%d", &mode);
    switch (mode)
    {
    case 1:
        classic();
        break;
    case 2:
        enginer();
        break;
    default:
        printf("Ошибка ввода!");
        break;
    }
}