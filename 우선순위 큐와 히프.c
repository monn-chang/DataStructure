#include<stdio.h>
#include<stdlib.h>

/* 출력된 insert의 값이 책하고 다르고 item을 자꾸 초기화 하라한다 그 이유를 내일 좀더 파고들어보자.
#define MAX_ELEMENT 100
typedef struct { //heap의 구조체(1차원 배열로 구현)
	int heap[MAX_ELEMENT];
	int heap_size; // 현재 히프 안에 저장된 요소의 개수
}HeapType;

HeapType* createHeap() { // 새로운 우선순위 큐를 만드는 함수
	HeapType* h = (HeapType*)malloc(sizeof(HeapType)); // 동적할당
	h->heap_size = 0; // 히프안에 저장된 요소의 개수를 0으로 초기화
	return h; // h로 반환
}

void insertHeap(HeapType* h, int item) { //우선순위 큐의 삽입을 위한 함수
	int i;
	h->heap_size = h->heap_size + 1; //현재 히프의 크기를 하나 증가시켜서 노드의 위치를 확장하고, 확장한 노드 번호가 현재의 삽입위치 i가 된다.
	i = h->heap_size;
	while ((i != 1) && (item > h->heap[i / 2])) { //두개를 비교하여 item이 부모 노드보다 작거나 같으면 현재의 삽입위치 i를 삽입 원소 위치로 확정.
		h->heap[i] = h->heap[i / 2]; //heap[i/2]는 부모노드 -> heap[i]에 저장한다.
		i /= 2; // i/2를 삽입 위치 i로 한다.
	}
	h->heap[i] = item;
}

int deleteHeap(HeapType* h) { //우선순위 큐의 삭제를 위한 함수
	int parent, child;
	int item, temp;
	item = h->heap[1];
	temp = h->heap[h->heap_size]; // 마지막 노드의 원소 heap[h->heap_size]를 temp에 임시 저장
	h->heap_size = h->heap_size - 1; //전체 노드의 개수가 줄어든 히프가 되도록 하기 위하여 노드의 개수를 1감소 한다.
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