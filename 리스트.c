#include<stdio.h>
#include<stdlib.h>




//typedef struct listnode{ 
//	int data; //노드를 구성하는 데이터 필드
//	struct listnode* link; // 다음노드를 가리키는 링크 필드
//}listnode;
//typedef struct {
//	listnode* head; //헤더의 정보를 저장할 구조체 선언
//}linkedlist_h;
//
//linkedlist_h* createlinkedlist_h(void); //리스트를 초기화 하는 함수
//void addlastnode(linkedlist_h* l, int x); //연결 리스트에 노드를 추가하는 함수
//void printlist(linkedlist_h* l); //연결 리스트를 출력하는 함수
//void insertAfter(linkedlist_h* l, int x, listnode* p); // 연결 리스트 중간에 노드 삽입하는 함수
//listnode* findnode(linkedlist_h* l, int x); //연결 리스트에서 데이터 검색하는 함수
//void deletelastnode(linkedlist_h* l); //마지막 노드 삭제하는 함수
//int deletenode(linkedlist_h* l, int x); //삭제하고자 하는 데이터가 저장된 노드 삭제하는 함수
//void reverse(linkedlist_h* l);//역순으로 순회 하는 함수
//int main() {
//	linkedlist_h* l;
//	listnode* p;
//	l = createlinkedlist_h();
//	printf("(1) 연결 리스트 생성하기! \n");
//	printlist(l);
//
//	printf("(2) 연결 리스트에 노드 추가하기! \n");
//	addlastnode(l, 10);   
//	addlastnode(l, 20);		
//	addlastnode(l, 30);
//	addlastnode(l, 40);
//	addlastnode(l, 50);
//	addlastnode(l, 60);
//	printlist(l);
//
//	printf("(3) 연결 리스트 마지막에 노드 한 개 추가하기! \n");
//	addlastnode(l, 50);
//	printlist(l);
//	
//	printf("(4) 20인 노드의 위치를 찾고 30을 20 뒤에 삽입! \n");
//	p = findnode(l, 20);
//	insertAfter(l, 30, p);
//	printlist(l);
//	
//	printf("(5) 20인 노드 삭제하기 \n");
//	deletenode(l, 20);
//	printlist(l);
//
//	printf("(6) 마지막 노드 삭제하기 \n");
//	deletelastnode(l);
//	printlist(l);
//
//	printf("(7) 리스트 원소를 역순으로 변화하기 \n");
//	reverse(l);
//	printlist(l);
//
//
//	getchar();
//	return 0;
//
//}
//
//linkedlist_h* createlinkedlist_h(void) { //연결 리스트를 초기화 하는 함수
//	linkedlist_h* l;
//
//	l = (linkedlist_h*)malloc(sizeof(linkedlist_h)); //헤더에 공간을 확보
//	l->head = NULL;
//	return l;
//}
//void addlastnode(linkedlist_h* l, int x) { // 노드를 추가하는 함수
//	listnode* newnode;
//	listnode* p;
//
//	newnode = (listnode*)malloc(sizeof(listnode)); //새로 추가할 노드를 저장할 메모리를 할당
//	newnode->data = x;
//	newnode->link = NULL;
//
//	if (l->head == NULL) { //첫 번째 추가되는 데이터라면
//		l->head = newnode;
//		return;
//	}
//	p = l->head;
//	while (p->link != NULL) {	//마지막 노드가 아니면 계속 반복 수행
//		p = p->link;			//링크 p가 자신 다음에 존재하는 노드를 가리키도록 함
//	}
//	p->link = newnode;
//}
//void printlist(linkedlist_h* l) {
//	listnode* p;
//	p = l->head;
//	while (p != NULL) {
//		printf("%5d", p->data);
//		p = p->link;
//	}
//	printf("\n");
//}
//
//
//
//void insertAfter(linkedlist_h* l, int x, listnode* p) { //연결 리스트 중간에 노드 삽입하는 함수
//	listnode* newnode;
//
//	newnode = (listnode*)malloc(sizeof(struct listnode)); //새로 추가할 노드를 저장할 메모리 할당
//	newnode->data = x; //데이터 필드에 데이터 설정
//
//	if (l->head == NULL) { //첫 번째 추가되는 데이터라면
//		newnode->link = NULL; // 링크 필드에 NULL값 설정
//		l->head = newnode;
//	}
//	else if (p == NULL) { //p가 NULL이면 첫 번째 노드로 삽입
//		l->head = newnode;
//	}
//	else {// p 다음에 삽입
//		newnode->link = p->link;
//		p->link = newnode;
//	}
//
//}
//
//listnode* findnode(linkedlist_h* l, int x) {  //연결 리스트에서 데이터 검색하는 함수
//	listnode* p;
//	p = l->head;  //linkedlist의 처음 노드인 head->link를 s의 초기값으로 지정
//	while (p != NULL) { //NULL에 도달하면 반복문을 벗어남
//		if (p->data == x) //데이터를 찾음
//			break;
//		p = p->link;
//	}
//	return p;
//}
//
//void deletelastnode(linkedlist_h* l) { //마지막 노드 삭제하는 함수
//	listnode* previous; //삭제하려는 노드의 바로 이전 노드
//	listnode* current; //삭제하려는 노드
//
//	if (l->head == NULL) 
//		return;
//	if (l->head->link == NULL) {
//		free(l->head);
//		l->head = NULL;
//		return;
//	}
//	else {
//		previous = l->head;
//		current = l->head->link;
//		while (current->link != NULL) {
//			previous = current;
//			current = current->link;
//		}
//		free(current);
//		previous->link = NULL;
//	}
//}
//
//int deletenode(linkedlist_h* l, int x) { //삭제하고자 하는 데이터가 저장된 노드 삭제하는 함수
//	listnode* previous;
//	listnode* current;
//	if (l->head == NULL) //head에 NULL문자가 있으면 리턴
//		return;
//
//	previous = l->head;
//	current = previous->link;
//
//	while (previous != NULL) { //previous가 NULL에 도달하면 반복문에서 벗어난다.
//		if (current->data == x)
//			break;
//		previous = previous->link;
//		current = previous->link;
//	}
//	if (current != NULL) {
//		previous->link = current->link;
//		free(current);
//		return 1;
//	}
//	else
//		return 0;
//	
//}
//
//void reverse(linkedlist_h* l) {
//	listnode* p;
//	listnode* q;
//	listnode* r;
//
//	p = l->head; //역순으로 만들 리스트
//	q = NULL;//역순으로 만들 노드
//	r = NULL;
//
//	while (p != NULL) {
//		r = q; //r은 역순으로 된 리스트, r은 q, q는 p를 차례로 따라간다.
//		q = p;
//		p = p->link;
//		q->link = r; //q의 링크 방향을 바꾼다.
//	}
//	l->head = q; // q는 역순으로 된 리스트의 헤드 포인터
//}

//typedef struct listnode {
//	int data; //노드를 구성하는 데이터 필드
//	struct listnode* link; // 다음노드를 가리키는 링크 필드
//}listnode;
//typedef struct {
//	listnode* head; //헤더의 정보를 저장할 구조체 선언
//}linkedlist_h;
//typedef int element;
//void addfrontnode(linkedlist_h* l, element x);// 원형 연결 리스트의 첫 번째 노드로 삽입
//void insertmiddlenode(linkedlist_h* l, listnode* pre, element x); // 원형 연결 리스트에 중간 노드 삽입
//
//int main() {
//
//}

//
//void addfrontnode(linkedlist_h* l, element x) { // 원형 연결 리스트의 첫 번째 노드로 삽입
//	listnode* newnode;
//	listnode* p;
//
//	newnode = getnode();
//	newnode->data = x;
//
//	if (l->head == NULL) { // 공백 리스트인 경우에 삽입하는 노드 newnode는 리스트의 첫번째 노드이자 마지막 노드가 되어야 한다.
//		l->head = newnode; //삽입할 새 노드의 주소를 포인터 head에 저장한다.
//		newnode->link = newnode; //새 노드가 자기 자신을 가리키게 함으로써 첫번째 노드가 마지막 노드가 되도록 지정한다.
//	}
//	else { //공백노드가 아닐시 단순 연결 리스트 처럼 마지막 노드에 새로운 노두를 삽입.
//		p = l->head;
//		while (p->link != l->head) //반복문을 수행하면서 순회 포인터 p가 링크를 따라 마지막 노드까지 이동한다.
//			p = p->link;
//		newnode->link = p->link;
//		p->link = newnode;
//		l->head = newnode;
//	}
//}
//void insertmiddlenode(linkedlist_h* l, listnode* pre, element x) { //원형 연결 리스트에 중간 노드 삽입
//	listnode* newnode;
//	listnode* p;
//	//새로 추가할 노드를 저장할 메모리 할당
//	newnode = getnode();
//	newnode->data = x; //데이터 필드에 데이터 설정
//
//	if (l->head == NULL) { // 공백 원형 연결 리스트인 경우
//		l->head = newnode;
//		newnode->link = newnode;
//	}
//	else {
//		newnode->link = pre->link;
//		pre->link = newnode;
//	}
//}
