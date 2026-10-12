#include <stdio.h>

void exerc0()
{
    int year, leafyear;
    printf("input year: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("윤년입니다.");
            }else{
                printf("평년입니다.");
            }
        }else{
            printf("윤년입니다.\n");
        }
    }else{
        printf("평년입니다.\n");
    }
}

void exerc1()
{
    int year, leafyear;
    int isleafyear = 0;
    printf("input year: ");
    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                isleafyear = 1;
            }
        }else{
            isleafyear = 1;
        }
    }
    if(isleafyear == 1) printf("윤년입니다.");
    else if(isleafyear == 0) printf("평년입니다.");
}

int isleafyear(int year){
    int isleaf = 0;

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                isleaf = 1;
            }
        }else{
            isleaf = 1;
        }
    }
    return isleaf;
}

void exerc2(void)
{
    int year, leafyear;

    printf("input year: ");
    scanf("%d", &year);

    if(isleafyear(year) == 1) printf("윤년입니다.");
    else printf("평년입니다.");
}

int main(void)
{
    // exerc0();
    // exerc1();
    exerc2();
}