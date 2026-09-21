#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void exerc1(void) {
	double inch, cm;
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm 입니다. \n", inch, cm);
}

void exerc2(void) {
	double F, C;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다. \n", C, F);
}

void exerc3(void) {
	double r, area;
	scanf("%lf", &r);
	area = r * r * 3.14;
	printf("반지름 %lf인 원의 넓이는 %lf입니다. \n", r, area);
}

int main(void)
{
	double r;
	//exerc1();
	//exerc2();
	exerc3();

	//double inch, cm;
	//double F, C;
	//double r, area;

	//scanf("%lf", &inch);
	//cm = inch * 2.54;
	//printf("%lf inch는 %lf cm 입니다. \n", inch, cm);

	//scanf("%lf", &C);
	//F = (C * 1.8) + 32;
	//printf("섭씨 %lf도는 화씨 %lf도 입니다. \n", C, F);

	

	//return 0;
}