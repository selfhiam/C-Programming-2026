#include <stdio.h>

// 유효한 점수 세 개
void exerc1(){
    int score;
    int count = 0;
    int sum = 0;

    while(count < 3){
        printf("점수를 입력하세요 (0~100, 종료: -1): ");
        scanf("%d", &score);
        if (score == -1){
            break;
        }
        if (score < 0 || score > 100){
            printf("0~100 사이의 값을 입력하세요.\n");
            continue;
        }
        sum += score;
        count ++;
    }
    if (count == 0){
        printf("입력된 점수가 없습니다.\n");
    } else {
        printf("유효한 점수의 개수: %d개\n", count);
        printf("평균값: %.2f\n", (double)sum / count);
    }
}

// 같은 숫자 세 번 연속
void exerc2(){
    int num;
    int test1 = 0;
    int test2 = 0;
    int total = 0;

    while(test2 < 3){
        printf("1~9 사이의 정수를 입력하세요: ");
        scanf("%d", &num);
        if (num < 1 || num > 9){
            printf("1~9 사이의 값을 입력하세요.\n");
            continue;
        }
        total ++;
        if (num == test1){
            test2 ++;
        } else {
            test1 = num;
            test2 = 1;
        }
    }
    printf("3번 연속 입력된 숫자: %d\n", test1);
    printf("전체 입력 횟수: %d회\n", total);
}

// 속이 빈 정사각형
void exerc3(){
    int n;

    while(1){
        printf("1~9 사이의 정수를 입력하세요: ");
        scanf("%d", &n);
        if (n >= 1 && n <= 9){
            break;
        }
        printf("1~9 사이의 값을 입력하세요.\n");
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 || i == n - 1 || j == 0 || j == n - 1){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    // exerc1();
    // exerc2();
    exerc3();
    return 0;
}