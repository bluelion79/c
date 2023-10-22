#include <stdio.h>

int main() {
    int a, b, result;
    char operator;
    int repeat;

    printf("\n==== 간단한 계산기 ====\n");

    printf("몇 번의 연산을 수행하시겠습니까? "); // 몇 번의 연산을 수행할지 입력 요청
    scanf("%d", &repeat);

    int i = 0; // 반복 횟수를 추적하는 변수

    while (i < repeat) {
        printf("\n연산을 선택하세요 (+, -, *, /, %%): ");
        scanf(" %c", &operator);

        printf("첫 번째 숫자를 입력하세요: ");
        scanf("%d", &a);

        printf("두 번째 숫자를 입력하세요: ");
        scanf("%d", &b);

        printf("\n==== 결과 ====\n");

        // 사용자가 입력한 연산자에 따라 결과를 계산
        if (operator == '+') {
            result = a + b;
            printf("%d + %d = %d\n", a, b, result);
        } else if (operator == '-') {
            result = a - b;
            printf("%d - %d = %d\n", a, b, result);
        } else if (operator == '*') {
            result = a * b;
            printf("%d * %d = %d\n", a, b, result);
        } else if (operator == '/') {
            if (b != 0) {
                result = a / b;
                printf("%d / %d = %d\n", a, b, result);
            } else {
                printf("0으로 나눌 수 없습니다.\n");
            }
        } else if (operator == '%') {
            if (b != 0) {
                result = a % b;
                printf("%d %% %d = %d\n", a, b, result);
            } else {
                printf("0으로 나눌 수 없습니다.\n");
            }
        } else {
            printf("유효하지 않은 연산자입니다.\n");
        }

        i++; // 반복 횟수 증가
    }

    return 0;
}