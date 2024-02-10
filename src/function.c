#include <stdio.h>
#include <math.h>

#define OK 0
#define ERROR 1
#define PI M_PI

double radian() {
    double gradus = 0;
    printf("Введите число(градусы)\n");
    scanf("%lf", &gradus);
    double result = gradus * (PI/180);
    return result;
}
double check_solo() {
    double number = 0;
    printf("Введите число:\n");
    if(scanf("%lf", &number) != 1 || getchar() != '\n') {
        printf("Ошибка ввода!"); 
        return ERROR;
    }
    return number;
}
double factorial(int number) {
    if (number == 0 || number == 10) {
        return 1;
    } else return number * factorial(number - 1);
}
int classic() {
    double number1 = 0;
    double number2 = 0;
    char operation;
    printf("Введите 2 числа:\n");
    if(scanf("%lf %lf", &number1, &number2) != 2 || getchar() != '\n') {
        printf("Ошибка ввода!"); 
        return ERROR;
    }
    printf("Выберите операцию(+, -, /, *)\n");
    if(scanf("%c", &operation) != 1 || getchar() != '\n') {
        printf("Ошибка ввода!"); 
        return ERROR;
    }
    operation == '+' ? printf("%-.2lf", number1+number2): operation == '-' ? printf("%-.2lf", number1-number2):
    operation == '/' ? printf("%-.2lf", number1/number2): operation == '*' ? printf("%-.2lf", number1*number2):
    printf("ERROR");
    return OK;
}
int enginer() {
    int operation = 0;
    double number1 = 0;
    double number2 = 0;
    printf("Выберите операцию:\n1:Корень\n2:Натуральный логарифм\n3:Факториал\n4:Степень\n5:Синус\n6:Косинус\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("%-.8lf", sqrt(check_solo()));
        break;
    case 2:
        printf("%-.8lf", log(check_solo()));
        break;
    case 3:
        printf("%-.2lf", factorial(check_solo()));
        break;
    case 4:
        printf("Введите 2 числа(число, степень)\n");
        scanf("%lf %lf", &number1, &number2);
        printf("%-.2lf", pow(number1, number2));
        break;
    case 5:
        printf("%lf", sin(radian()));
        break;
    case 6:
        printf("%lf", cos(radian()));
        break;
    default:
        printf("Ошибка ввода!");
        break;
    }
    return OK;
}
