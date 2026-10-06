#include <stdio.h>

int main(void){
    int grade;
    printf("학년을 입력하세요");
    scanf("%d", &grade);

    switch (grade)
    {
    case 1:
        printf("1학년");
        break;
    case 2:
        printf("2학년");
        break;
    case 3:
        printf("3학년");
        break;
    case 4:
        printf("4학년");
        break;
        
    default:
        printf("잘못된 값을 입력하셨습니다.");
        break;
    }
}