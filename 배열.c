#include<stdio.h>
//#define MAX 101
//
//int sum(int arr[], int size);
//int main() {
//	int arr[MAX] = { 95,70,80,75,100 };
//	int res;
//
//	int size = sizeof(arr) / sizeof(arr[0]); // �迭�� ũ�⸦ ���Ҷ� �迭�� ��ü���� ũ�� / �迭�� ����� ũ��
//
//	res = sum(arr, size);
//	printf("�迭 ���ҵ��� ���� = %5d \n", res);
//
//	getchar();
//}
//int sum(int arr[], int size) { //�Լ��� �Ű������� �迭�� ����� ��� �����͸� ����ؾ��Ѵ�.
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
//	printf(">> �迭���(�Լ� ȣ����) << \n");
//	for (i = 0; i < size; i++) {
//		printf("%5d", p[i]);
//	}
//
//	test(arr, size, val);
//
//	printf("\n\n>> �迭���(�Լ� ȣ����) << \n");
//	for (i = 0; i < size; i++) {
//		printf("%5d", arr[i]);
//	}
//
//	printf("\n\n>> ���� ȣ�� <<\n");
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
//	printf("%d�� %d�� ¥�� 2���� �迭 \n\n", rSize, cSize);
//
//	for (r = 0; r < rSize; r++) {
//		for (c = 0; c < cSize; c++)
//			printf("%3d", arr[r][c]);
//		printf("\n");
//	}
//}
