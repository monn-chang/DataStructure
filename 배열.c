#include<stdio.h>
//#define MAX 101
//
//int sum(int arr[], int size);
//int main() {
//	int arr[MAX] = { 95,70,80,75,100 };
//	int res;
//
//	int size = sizeof(arr) / sizeof(arr[0]); // 배열의 크기를 구할때 배열의 전체공간 크기 / 배열의 요소의 크기
//
//	res = sum(arr, size);
//	printf("배열 원소들의 총합 = %5d \n", res);
//
//	getchar();
//}
//int sum(int arr[], int size) { //함수의 매개변수로 배열을 사용할 경우 포인터를 사용해야한다.
//	int s = 0;
//	int i;
//	for (i = 0; i < size; i++) {
//		s = s + arr[i];
//	}
//	return s;
//}


//void test(int arr[], int size, int val);
//
//int main() {
//	int arr[MAX] = { 95,80,80,17,23 };
//	int i;
//	int* p = arr;
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int val = 80;
//
//	printf(">> 배열출력(함수 호출전) << \n");
//	for (i = 0; i < size; i++) {
//		printf("%5d", p[i]);
//	}
//
//	test(arr, size, val);
//
//	printf("\n\n>> 배열출력(함수 호출후) << \n");
//	for (i = 0; i < size; i++) {
//		printf("%5d", arr[i]);
//	}
//
//	printf("\n\n>> 변수 호출 <<\n");
//	printf("%5d", val);
//	getchar();
//
//}
//void test(int arr[], int size, int val) {
//	int i;
//	val = val * 2;
//
//	for (i = 0; i < size; i++) {
//		arr[i] = arr[i] * 2;
//	}
//}

//typedef struct {
//	int degree;
//	float coef[MAX];
//}polynoimal;
//
//polynoimal a = { 8,{2,0,0,-10,0,-3,0,0,1} };


//void main() {
//	int r, c, rSize, cSize;
//	int arr[3][4] = { {90,85,95,80}, {75,96,80,90},{90,80,70,60} };
//
//	rSize = sizeof(arr) / sizeof(arr[0]);
//	cSize = sizeof(arr[0]) / sizeof(arr[0][0]);
//
//	printf("%d행 %d열 짜리 2차원 배열 \n\n", rSize, cSize);
//
//	for (r = 0; r < rSize; r++) {
//		for (c = 0; c < cSize; c++)
//			printf("%3d", arr[r][c]);
//		printf("\n");
//	}
//}
