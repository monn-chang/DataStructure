#include<stdio.h>
//int fact(int n); // ���丮�� ���ϴ� ����Լ� ���� ����
//int main() { 
//	int n = 5;
//	printf("%d! = %d \n", n, fact(n)); // ���丮�� ���ϴ� ����Լ� ȣ��
//
//	getchar();
//	
//}
//int fact(int n) { 
//	if (n <= 1)
//		return 1; // �Լ� ȣ�� ����
//	else
//		//return n * fact(n - 1); //���ȣ�� �߻� 
//		return n * fact(n - 1);
//}


//int sum(int n);
//int main() {
//	printf("5������ �ڿ����� �� : %d", sum(5));
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
//	printf("1���� %d������ �ڿ����� �� = %d \n", n, sum(5));
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
//		printf("%c���� %d�� ������ %c�� �̵��Ѵ�. \n", a, n, c);
//	else {
//		hanoi(n - 1, a, c, b);
//		printf("%c���� %d�� ������ %c�� �̵��Ѵ�. \n", a, n, c);
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
//	printf("n�� %d�� ��� �������� �� = %d \n", n, sum);
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