#include<stdio.h>


//�迭�� �̿��� ����
/*
#define MAX_STACK_SIZE 5
#define true 1
#define false 0
typedef int element;



element stack[MAX_STACK_SIZE];
int top = -1;
void initialize() {
	top = -1;
}


int isEmpty() {
	if (top < 0)
		return true;
	else
		return false;

}

int isFull() {
	if (top == MAX_STACK_SIZE)
		return true;
	else
		return false;
}
void push(element item) {
	if (isFull()) {
		printf("stack is full , can not add element. \n");
	}
	else {
		stack[++top] = item;
	}
}

element pop() {
	if (isEmpty()) {
		printf("stack is empty \n");
	}
	else {
		return stack[top--];
	}
}
int main() {
	push('A');
	push('B');
	push('C');
	push('D');
	push('E');

	while (isEmpty() == false) {
		printf("%c \t", pop());
	}
	getchar();

}*/

//���� ����Ʈ�� �̿��� ����

/*
#define MAX_STACK_SIZE 5
#define true 1
#define false 0
typedef int element;

typedef struct StackNode { //���� ����Ʈ�� ������ �����ϱ� ���� ����ü
	element data;
	struct StackNode* link; //���� ��带 ����Ű�� ������ ����
}StackNode;
StackNode* top;
int isEmpty() {
	if (top == 0)
		return true;
	else
		return false;

}
void push(element item) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode)); //���ο� ��� ������ Ȯ��(�����Ҵ�), ���ο� ��� ������ ���� �ּҸ� ����Ű�� ������ ���� temp�� ����.
	temp->data = item;
	temp->link = top; // ���ο� ��尡 ���� ������ ù ��带 ����Ű�� �Ѵ�.
	top = temp; //top�� ���ο� ��带 ����Ű�� �Ѵ�.
}

element pop() {
	element item;
	StackNode* temp = top;
	if (top == NULL) {
		printf("\n\n stack is empty! \n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp -> link;
		free(temp);
		return item;
	}
}

element peek() {
	element item;
	if (top == NULL) {
		printf("\n\n Stack is empty!\n");
		return 0;
	}
	else {
		item = top->data;
		return item;
	}
}

int main() {
	push('A');
	push('B');
	push('C');
	push('D');
	push('E');

	while (isEmpty() == false) {
		printf("%c \t", pop());
	}
	getchar();

}
*/

/*
#define MAX_STACK_SIZE 5
#define true 1
#define false 0
typedef int element;

typedef struct StackNode { //���� ����Ʈ�� ������ �����ϱ� ���� ����ü
	element data;
	struct StackNode* link; //���� ��带 ����Ű�� ������ ����
}StackNode;
StackNode* top;
int isEmpty() {
	if (top == 0)
		return true;
	else
		return false;

}
void push(element item) {
	StackNode* temp = (StackNode*)malloc(sizeof(StackNode)); //���ο� ��� ������ Ȯ��(�����Ҵ�), ���ο� ��� ������ ���� �ּҸ� ����Ű�� ������ ���� temp�� ����.
	temp->data = item;
	temp->link = top; // ���ο� ��尡 ���� ������ ù ��带 ����Ű�� �Ѵ�.
	top = temp; //top�� ���ο� ��带 ����Ű�� �Ѵ�.
}

element pop() {
	element item;
	StackNode* temp = top;
	if (top == NULL) {
		printf("\n\n stack is empty! \n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
	}
}

element peek() {
	element item;
	if (top == NULL) {
		printf("\n\n Stack is empty!\n");
		return 0;
	}
	else {
		item = top->data;
		return item;
	}
}

int pairCheck(char* exp) {
	char symbol, open_pair;
	int i, length = strlen(exp);
	top = NULL;

	for (i = 0; i < length; i++) {
		symbol = exp[i];
		switch (symbol) {
		case '(':
		case '[':
		case '{':
			push(symbol);
			break;
		case ')':
		case ']':
		case '}':
			if (top == NULL) {
				return 0;
			}
			else {
				open_pair = pop();
				if ((open_pair == '(' && symbol != ')') ||
					(open_pair == '[' && symbol != ']') ||
					(open_pair == '{' && symbol != '}') )
					return 0;
				else
					break;
			}

		}
		
	}
	if (top == NULL)
		return 1;
	else
		return 0;
}

int main() {
	char* x[4] = { "(A - B) * C) + D",
		"(A - B) * C) + ( D", "A [ B ( C ]", "(A / (B - C) )" };
	for (int i = 0; i < 4; i++) {
		printf("\n %s", x[i]);
		if (pairCheck(x[i]) == 1)
			printf(" -> ������ ��ȣ�� �°� ��� �Ǿ����ϴ�.!");
		else
			printf(" -> ������ ��ȣ�� Ʋ�Ƚ��ϴ�.!");
	}
}

*/

