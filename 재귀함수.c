#include<stdio.h>
//int fact(int n); // 팩토리얼 구하는 재귀함수 원형 정의
//int main() { 
//	int n = 5;
//	printf("%d! = %d \n", n, fact(n)); // 팩토리얼 구하는 재귀함수 호출
//
//	getchar();
//	
//}
//int fact(int n) { 
//	if (n <= 1)
//		return 1; // 함수 호출 중지
//	else
//		//return n * fact(n - 1); //재귀호출 발생 
//		return n * fact(n - 1);
//}


//int sum(int n);
//int main() {
//	printf("5까지의 자연수의 합 : %d", sum(5));
//	
//}
//int sum(int n) {
//	if (n == 0)
//		return 0;
//	else
//		return n + sum(n - 1);
//}

//void UP(int);
//int main() {
//	UP(1);
//
//	getchar();
//}
//void UP(int n) {
//	printf("   level up %d\n", n);
//	
//	if (n < 3) {
//		UP(n + 1);}
//	//return 0;
//	printf("   level down %d\n", n);
//	
//}

//void prin(int n);
//int main() {
//	prin(8);
//
//	getchar();
//}
//
//void prin(int n) {
//	if (n > 3) {
//		printf("%d \t", n);
//		prin(n - 1);
//	}
//	printf("%d \t", n);
//}

//int sum(int n);
//int main() {
//	int n = 5;
//	printf("1부터 %d까지의 자연수의 합 = %d \n", n, sum(5));
//
//	getchar();
//}
//
//int sum(int n) {
//	int i, s = 0;
//	for (i = 0; i <= n; i++) {
//		s = s + i;		
//	}
//	return s;
//}

//int fact(int n);
//int main() {
//	printf("5! = %d", fact(5));
//}
//int fact(int n) {
//	int i;
//	int f = 1;
//	for (i = 1; i <= n; i++)
//		f = f * i;
//	return f;
//}


//int fib(int n);
//int main() {
//	int n = 5;
//
//	for (int i = 1; i <= 5; i++) {
//		printf("\t%d", fib(i));
//	}
//	printf("\n");
//}
//int fib(int n) {
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}

//int fib(int n);
//int main() {
//	int n = 5;
//
//	fib(n);
//
//	getchar();
//}
//int fib(int n) {
//	int i = 0;
//	int old = 1;
//	int cur = 1;
//	int next;
//	while (cur < 100) {
//		if (i++ >= n)
//			break;
//		printf("\t%d", cur);
//		next = cur + old;
//		old = cur;
//		cur = next;
//	}
//	printf("\n");
//}

//void hanoi(int n, int a, int b, int c);
//int main() {
//	hanoi(3, 'a', 'b', 'c');
//
//}
//void hanoi(int n, int a, int b, int c) {
//	if (n == 1)
//		printf("%c에서 %d의 원반을 %c로 이동한다. \n", a, n, c);
//	else {
//		hanoi(n - 1, a, c, b);
//		printf("%c에서 %d의 원반을 %c로 이동한다. \n", a, n, c);
//		hanoi(n = 1, b, a, c);
//	}
//		
//}

//int recursive(int n);
//int main() {
//	int n = 100;
//
//	recursive(n);
//
//	getchar();
//}
//int recursive(int n) {
//	/*int i;
//	for (i = 1; i <= n; i++) {
//		printf("%d\t", i);
//	}
//	return 0;*/
//	if(n>1)
//		recursive(n - 1);
//	printf("%d \t", n);
//}

//int sig(int n);
//int main() {
//	int n = 4;
//	int i, sum = 0;
//	for (i = 1; i <= n; i++) {
//		sum = sum + sig(i);
//	}
//	printf("n이 %d인 경우 군수열의 합 = %d \n", n, sum);
//
//	getchar();
//}
//int sig(int n) {
//	if (n == 1)
//		return 1;
//	
//	else
//		return n +sig(n - 1);
//}

//void star(int n);
//void star1(int n);
//int main() {
//	int n = 5;
//	star1(5);
//	getchar();
//}
//void star(int n) {
//	
//	if (n < 0)
//		return 0;
//	
//	star(n - 1);
//	printf("*");	
//}
//void star1(int n) {
//	if (n < 0)
//		return 0;
//	star1(n - 1);
//	star(n);
//	printf("\n");
//}