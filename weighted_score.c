#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void){
    double midterm, final, homework, weighted_score;

    scanf("%lf %lf %lf", &midterm, &final, &homework);

    weighted_score = midterm * 0.3 + final * 0.4 + homework * 0.3;

    printf("weighted_score=%.2f\n", weighted_score);
    return 0;
}