#include<stdio.h>
#include<stdlib.h>


/*
#define MAX_QUEUE_SIZE 100


char queue[MAX_QUEUE_SIZE];

typedef char element;
typedef struct {
	element queue[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

QueueType* creatQueue() {
	QueueType* Q;
	Q = (QueueType*)malloc(sizeof(QueueType));
	Q->front = -1;
	Q->rear = -1;
	return 0;
}

int isEmpty(QueueType* Q) {
	if (Q->front == Q->rear)
		return 1;
	else
		return 0;
}

int isFull(QueueType* Q) {
	if (Q->rear == MAX_QUEUE_SIZE - 1)
		return 1;
	else
		return 0;
}


void enQueue(QueueType* Q, element item) {
	if (isFull(Q)) {
		exit(1);
	}
	else {
		Q->rear++;
		Q->queue[Q->rear] = item;
		printf("%c \t", item);
	}
}


element deQueue(QueueType* Q) {
	if (isEmpty(Q)) {
		exit(1);
	}
	else {
		Q->front++;
		return Q->queue[Q->front];
	}
}
element peek(QueueType* Q) {
	if (isEmpty(Q))
		exit(1);
	else
		return Q->queue[Q->front+1];
}

int main(void) {
	QueueType* Q1 = creatQueue();
	enQueue(Q1, 'A');
	enQueue(Q1, 'B');
	enQueue(Q1, 'C');

	while (isEmpty(Q1) == 0)
		printf(" %c \t", deQueue(Q1));

	getchar();
}

*/