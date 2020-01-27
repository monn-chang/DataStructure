#include<stdio.h>
#include<stdlib.h>

/* ��µ� insert�� ���� å�ϰ� �ٸ��� item�� �ڲ� �ʱ�ȭ �϶��Ѵ� �� ������ ���� ���� �İ����.
#define MAX_ELEMENT 100
typedef struct { //heap�� ����ü(1���� �迭�� ����)
	int heap[MAX_ELEMENT];
	int heap_size; // ���� ���� �ȿ� ����� ����� ����
}HeapType;

HeapType* createHeap() { // ���ο� �켱���� ť�� ����� �Լ�
	HeapType* h = (HeapType*)malloc(sizeof(HeapType)); // �����Ҵ�
	h->heap_size = 0; // �����ȿ� ����� ����� ������ 0���� �ʱ�ȭ
	return h; // h�� ��ȯ
}

void insertHeap(HeapType* h, int item) { //�켱���� ť�� ������ ���� �Լ�
	int i;
	h->heap_size = h->heap_size + 1; //���� ������ ũ�⸦ �ϳ� �������Ѽ� ����� ��ġ�� Ȯ���ϰ�, Ȯ���� ��� ��ȣ�� ������ ������ġ i�� �ȴ�.
	i = h->heap_size;
	while ((i != 1) && (item > h->heap[i / 2])) { //�ΰ��� ���Ͽ� item�� �θ� ��庸�� �۰ų� ������ ������ ������ġ i�� ���� ���� ��ġ�� Ȯ��.
		h->heap[i] = h->heap[i / 2]; //heap[i/2]�� �θ��� -> heap[i]�� �����Ѵ�.
		i /= 2; // i/2�� ���� ��ġ i�� �Ѵ�.
	}
	h->heap[i] = item;
}

int deleteHeap(HeapType* h) { //�켱���� ť�� ������ ���� �Լ�
	int parent, child;
	int item, temp;
	item = h->heap[1];
	temp = h->heap[h->heap_size]; // ������ ����� ���� heap[h->heap_size]�� temp�� �ӽ� ����
	h->heap_size = h->heap_size - 1; //��ü ����� ������ �پ�� ������ �ǵ��� �ϱ� ���Ͽ� ����� ������ 1���� �Ѵ�.
	parent = 1;
	child = 2;
	while (child <= h->heap_size) {
		if ((child < h->heap_size) && (h->heap[child]) < h->heap[child + 1])
			child++;
		if (temp >= h->heap[child]) break;

		h->heap[parent] = h->heap[child];
		parent = child;
		child = child * 2;
	}
	h->heap[parent] = temp;
	return item;
}

void printHeap(HeapType* h) {
	int i;
	printf("\n Heap : ");
	for (i = 1; i <= h->heap_size; i++) {
		printf("[%d] ", h->heap[i]);
	}
}

int main() {
	int i, n;
	int item = 0;
	HeapType* heap = createHeap();
	insertHeap(heap, 20);
	insertHeap(heap, 15);
	insertHeap(heap, 19);
	insertHeap(heap, 8);
	insertHeap(heap, 13);
	insertHeap(heap, 10);

	printHeap(heap);

	printf("\n\n insert : %d ", item);
	insertHeap(heap, 23);

	printHeap(heap);

	n = heap->heap_size;
	for (i = 1; i <= n; i++) {
		item = deleteHeap(heap);
		printf("\n\n delete : %d ", item);
		printHeap(heap);
	}
	getchar();
}

*/