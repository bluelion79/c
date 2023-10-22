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

    printf("\n==== 간단한 계산기 ====\n");  // 화면에 간단한 계산기라는 제목을 출력

    printf("연산자를 입력하세요 (+, -, *, /, %%): ");  // 사용자에게 연산자를 입력해달라고 요청
    scanf(" %c", &operator);  // 입력한 연산자를 변수 operator에 저장

    printf("첫 번째 숫자를 입력하세요: ");  // 사용자에게 첫 번째 숫자를 입력해달라고 요청
    scanf("%d", &a);  // 입력한 숫자를 변수 a에 저장

    printf("두 번째 숫자를 입력하세요: ");  // 사용자에게 두 번째 숫자를 입력해달라고 요청
    scanf("%d", &b);  // 입력한 숫자를 변수 b에 저장

    printf("\n==== 결과 ====\n");  // 결과 부분의 제목 출력

    // 사용자가 입력한 연산자에 따라 적절한 함수를 호출하여 결과를 계산
    if (operator == '+') {
        result = add(a, b);  // 더하기 함수 호출
        printf("%d + %d = %d\n", a, b, result);  // 덧셈 결과 출력
    } else if (operator == '-') {
        result = subtract(a, b);  // 빼기 함수 호출
        printf("%d - %d = %d\n", a, b, result);  // 뺄셈 결과 출력
    } else if (operator == '*') {
        result = multiply(a, b);  // 곱하기 함수 호출
        printf("%d * %d = %d\n", a, b, result);  // 곱셈 결과 출력
    } else if (operator == '/') {
        result = divide(a, b);  // 나누기 함수 호출
        printf("%d / %d = %d\n", a, b, result);  // 나눗셈 결과 출력
    } else if (operator == '%') {
        result = modulo(a, b);  // 나머지 함수 호출
        printf("%d %% %d = %d\n", a, b, result);  // 나머지 결과 출력
    } else {
        printf("유효하지 않은 연산자입니다.\n");  // 유효하지 않은 연산자라고 출력
    }

    return 0;  // 프로그램을 끝내고 0을 반환
}