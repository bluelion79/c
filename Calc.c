#include <stdio.h>  // 표준 입출력 라이브러리를 포함하여 프로그램 시작

int main() {  // main 함수 시작
    int a, b, result;  // 정수형 변수 a, b, result를 선언
    char operator;

    printf("\n==== 간단한 계산기 ====\n");  // 화면에 간단한 계산기 제목 출력

    printf("연산자를 입력하세요 (+, -, *, /, %%): ");  // 사용자에게 연산자 입력 안내
    scanf(" %c", &operator);  // 입력받은 연산자를 operator 변수에 저장

    printf("첫 번째 숫자를 입력하세요: ");  // 사용자에게 첫 번째 숫자 입력 안내
    scanf("%d", &a);  // 입력받은 숫자를 변수 a에 저장

    printf("두 번째 숫자를 입력하세요: ");  // 사용자에게 두 번째 숫자 입력 안내
    scanf("%d", &b);  // 입력받은 숫자를 변수 b에 저장

    printf("\n==== 결과 ====\n");  // 계산 결과 부분 제목 출력

    if (operator == '+') {  // 만약 연산자가 +이면
        result = a + b;  // a와 b를 더한 결과를 result 변수에 저장
        printf("%d + %d = %d\n", a, b, result);  // 덧셈 결과 출력
    } else if (operator == '-') {  // 만약 연산자가 -이면
        result = a - b;  // a와 b를 뺀 결과를 result 변수에 저장
        printf("%d - %d = %d\n", a, b, result);  // 뺄셈 결과 출력
    } else if (operator == '*') {  // 만약 연산자가 *이면
        result = a * b;  // a와 b를 곱한 결과를 result 변수에 저장
        printf("%d * %d = %d\n", a, b, result);  // 곱셈 결과 출력
    } else if (operator == '/') {  // 만약 연산자가 /이면
        if (b != 0) {  // 만약 b가 0이 아니면
            result = a / b;  // a를 b로 나눈 결과를 result 변수에 저장
            printf("%d / %d = %d\n", a, b, result);  // 나눗셈 결과 출력
        } else {  // 그렇지 않으면
            printf("0으로 나눌 수 없습니다.\n");  // 0으로 나눌 수 없다고 출력
        }
    } else if (operator == '%') {  // 만약 연산자가 %이면
        if (b != 0) {  // 만약 b가 0이 아니면
            result = a % b;  // a를 b로 나눈 나머지를 result 변수에 저장
            printf("%d %% %d = %d\n", a, b, result);  // 나머지 결과 출력
        } else {  // 그렇지 않으면
            printf("0으로 나눌 수 없습니다.\n");  // 0으로 나눌 수 없다고 출력
        }
    } else {  // 그 외의 연산자라면
        printf("유효하지 않은 연산자입니다.\n");  // 유효하지 않은 연산자라고 출력
    }

    return 0;  // 프로그램 종료
}