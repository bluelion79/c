#include <stdio.h>

// 더하기 함수
int add(int a, int b) {
    return a + b;
}

// 빼기 함수
int subtract(int a, int b) {
    return a - b;
}

// 곱하기 함수
int multiply(int a, int b) {
    return a * b;
}

// 나누기 함수
int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("0으로 나눌 수 없습니다.\n");
        return 0; // 오류 시 0 반환
    }
}

// 나머지 함수
int modulo(int a, int b) {
    if (b != 0) {
        return a % b;
    } else {
        printf("0으로 나눌 수 없습니다.\n");
        return 0; // 오류 시 0 반환
    }
}

int main() {
    int a, b, result;
    char operator;
    int repeat;

    printf("\n==== 간단한 계산기 ====\n");

    printf("몇 번의 연산을 수행하시겠습니까? "); // 몇 번의 연산을 수행할지 입력 요청
    scanf("%d", &repeat);

    for (int i = 0; i < repeat; i++) {
        printf("\n연산을 선택하세요 (+, -, *, /, %%): ");
        scanf(" %c", &operator);

        printf("첫 번째 숫자를 입력하세요: ");
        scanf("%d", &a);

        printf("두 번째 숫자를 입력하세요: ");
        scanf("%d", &b);

        printf("\n==== 결과 ====\n");

        // 사용자가 입력한 연산자에 따라 적절한 함수를 호출하여 결과를 계산
        if (operator == '+') {
            result = add(a, b);
            printf("%d + %d = %d\n", a, b, result);
        } else if (operator == '-') {
            result = subtract(a, b);
            printf("%d - %d = %d\n", a, b, result);
        } else if (operator == '*') {
            result = multiply(a, b);
            printf("%d * %d = %d\n", a, b, result);
        } else if (operator == '/') {
            result = divide(a, b);
            printf("%d / %d = %d\n", a, b, result);
        } else if (operator == '%') {
            result = modulo(a, b);
            printf("%d %% %d = %d\n", a, b, result);
        } else {
            printf("유효하지 않은 연산자입니다.\n");
        }
    }

    return 0;
}
