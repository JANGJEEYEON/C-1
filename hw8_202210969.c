#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double std_deviation(double* arr) {
	int i;
	double sum = 0, avg = 0, result = 0;

	//평균
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	avg = sum / 5;

	// 분자 계산
	for (i = 0; i < 5; i++) {
		result = result + pow((arr[i] - avg), 2);
	}

	// 분모 계산, 나누기 N
	result = result / 5;

	//루트 씌우기
	result = sqrt(result);

	return result;
}

int main(void) {
	double num[5];
	double return_result;
	printf("Enter 5 real numbers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%lf", &num[i]);
	}
	return_result = std_deviation(num);
	printf("Standard Deviation = %.3lf ", return_result);
}