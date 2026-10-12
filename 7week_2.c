#include <stdio.h>

// #1. 거듭제곱 구하기
void exerc1(void){
    int n, r, abs_r;
    double x;

    x = 1.0;

    printf("input n, r: ");
    scanf("%d%d", &n, &r);

    if(r < 0) abs_r = -r;
    else abs_r = r;

    for(int i=0; i < abs_r; i++){
        x *= n;
    }
    if(r < 0) x = 1.0 / x;

    printf("%d의 %d승은 %lf 입니다.", n, r, x);
}

// #2. 팩토리얼 구하기
void exerc2(void){
    int n, result;
    result = 1;
    
    printf("input n: ");
    scanf("%d", &n);

    for(int i = n; i > 0; i--) result *= i;
    printf("%d factorial = %d입니다.", n, result);
}

// #3. 피보나치 수열(n번쨰 출현하는 수열의 숫자는?)
void exerc3(void){
    int n;
    int n_1, n_2, result;
    n_1 = 1;
    n_2 = 0;

    printf("input n: ");
    scanf("%d", &n);

    if(n == 0)result = n_2;
    else if(n == 1) result = n_1;
    else{
        for(int i=2; i<=n; i++){
            result = n_1 + n_2;
            n_2 = n_1;
            n_1 = result;
        }
    }
    printf("%d 번째 숫자는 %d 입니다.", n, result);
}

// #4. 
void exerc4(void){
    int sum;
    double avg;
    int score;
    int i = 0;
    while(1){
        printf("input score: ");
        scanf("%d", &score);

        // if(score == -1) break;
        if(score == -1) continue;
        sum += score;
        i++;
        // printf("run\n");
    }
    avg = sum / (double)i;
    printf("avg = %lf\n", avg);
}

// 5. 이중 반복문(화면에 삼각형모양 출력하기)
void exerc5(void){
    char star = '*';
    int line;
    printf("input line: ");
    scanf("%d", &line);
    for(int i=0; i < line; i++){
        int star_count = i * 2 + 1;
        for(int j=0; j < star_count; j++) printf("%c", star);
        printf("\n");
    }
}

// 6. printstar 과제
void printStar(void){
    char star = '*';
    int line;
    printf("input line: ");
    scanf("%d", &line);
    for(int i=0; i < line; i++){
        int space_count = line - i - 1;
        int star_count = i * 2 + 1;
        for(int j=0; j < space_count; j++) printf(" ");
        for(int j=0; j < star_count; j++) printf("%c", star);
        printf("\n");
    }
}

int main(){
    // exerc1();
    // exerc2();
    // exerc3();
    // exerc4();
    // exerc5();
    printStar();
    return 0;
}