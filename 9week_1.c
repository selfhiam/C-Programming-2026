#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

// 1. rand 난수 생성기 활용.
// int main(void){
//     int number;
//     srand(42);
//     number = rand();
//     printf("number = %d\n", number);
//     number = rand();
//     printf("number = %d\n", number);

//     return 0;
// }

// 2. time
// int main(void){
//     int number;
//     srand(time(NULL));
//     number = rand();
//     printf("number = %d\n", number);
//     number = rand();
//     printf("number = %d\n", number);

//     return 0;
// }

// 3. 주사위
// int main(void){
//     int number;
//     srand(time(NULL));
//     number = rand() % 6 + 1;
//     printf("number = %d\n", number);

//     return 0;
// }

// 4. 로또
// int main(void){
//     int number;
//     srand(time(NULL));
//     number = rand() % 45 + 1;
//     printf("number = %d\n", number);

//     return 0;
// }

// 5. 주사위 10번, 100번 던지기, 줄 바꿈
// int main(void){
//     int number;
//     srand(time(NULL));
//     // for(int i = 0; i<10;i++){
//     for(int i = 0; i<100;i++){
//         number = rand() % 6 + 1;
//         if(i % 10 == 0) printf("\n");
//         printf("%d ", number);
//     }
//     return 0;
// }

// 6. 배열에 넣으면서 출력
// int main(void){
//     int number[100];
//     srand(time(NULL));
//     for(int i = 0; i<100;i++) number[i] = rand() % 6 + 1;
//     for(int i = 0; i<100;i++){
//         if(i % 10 == 0) printf("\n");
//         printf("%d ", number[i]);
//     }
//     return 0;
// }

// 7. 100점 만점
// int main(void){
//     int number[100];
//     srand(time(NULL));
//     for(int i = 0; i<100;i++) number[i] = rand() % 101;
//     for(int i = 0; i<100;i++){
//         if(i % 10 == 0) printf("\n");
//         printf("%3d ", number[i]);
//     }
//     return 0;
// }

// 8. 30명
// int main(void){
//     int number[30];
//     srand(time(NULL));
//     for(int i = 0; i<30;i++) number[i] = rand() % 101;
//     for(int i = 0; i<30;i++){
//         if(i % 10 == 0) printf("\n");
//         printf("%3d ", number[i]);
//     }
//     return 0;
// }

// 9. define size
// int main(void){
//     int number[SIZE];
//     srand(time(NULL));
//     for(int i = 0; i<SIZE;i++) number[i] = rand() % 101;
//     for(int i = 0; i<SIZE;i++){
//         if(i % 10 == 0) printf("\n");
//         printf("%3d ", number[i]);
//     }
//     return 0;
// }

// 10. 실습 깃허브에 올리고, 다 하구 가고 되고 가서 해도 된다.
// 점수관리 퀴즈 제출, 온라인 선택 정렬 소스코드를 알려주는데 그걸 활용해서 버블 정렬 코드 작성 깃허브에 제출.
// 총 2개를 제출해라.
int main(void){
    int number[SIZE];
    srand(time(NULL));
    for(int i=0;i<SIZE;i++) number[i] = rand() % 101;

    for(int i=0;i<SIZE;i++) printf("%2d번 학생: %3d점\n", i+1, number[i]);

    int max = number[0], min = number[0], sum = 0;
    for(int i=0;i<SIZE;i++){
        if(number[i] > max) max = number[i];
        if(number[i] < min) min = number[i];
        sum += number[i];
    }

    printf("최댓값: %d점\n", max);
    printf("최솟값: %d점\n", min);
    printf("평균: %.2f점\n", (double)sum / SIZE);

    return 0;
}