#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

// 선택 정렬
// int main(){
//     int number[SIZE];
//     int most;
//     int temp;
    
//     for (int i = 0; i<SIZE; i++){
//         number[i] = (rand() % 100) + 1;
//     }

//     for (int i = 0; i<SIZE; i++){
//         most = i;
//         for(int j = i+1; j < SIZE; j++){
//             if(number[most] < number[j]) most = j;
//         }
//         temp = number[i];
//         number[i] = number[most];
//         number[most] = temp;
//     }

//     for(int i = 0; i < SIZE; i++){
//         printf("%3d\t", number[i]);
//         if((i+1) % 10 == 0) printf("\n");
//     }

//     return 0;
// }

// 버블 정렬
int main(){
    int number[SIZE];
    int temp;

    for (int i = 0; i < SIZE; i++){
        number[i] = (rand() % 100) + 1;
    }

    for (int i = 0; i < SIZE - 1; i++){
        for (int j = 0; j < SIZE - 1 - i; j++){
            if (number[j] < number[j + 1]){
                temp = number[j];
                number[j] = number[j + 1];
                number[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < SIZE; i++){
        printf("%3d\t", number[i]);
        if ((i + 1) % 10 == 0) printf("\n");
    }

    return 0;
}