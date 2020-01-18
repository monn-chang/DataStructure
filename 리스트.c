#include<stdio.h>
#include<stdlib.h>




//typedef struct listnode{ 
//	int data; //��带 �����ϴ� ������ �ʵ�
//	struct listnode* link; // ������带 ����Ű�� ��ũ �ʵ�
//}listnode;
//typedef struct {
//	listnode* head; //����� ������ ������ ����ü ����
//}linkedlist_h;
//
//linkedlist_h* createlinkedlist_h(void); //����Ʈ�� �ʱ�ȭ �ϴ� �Լ�
//void addlastnode(linkedlist_h* l, int x); //���� ����Ʈ�� ��带 �߰��ϴ� �Լ�
//void printlist(linkedlist_h* l); //���� ����Ʈ�� ����ϴ� �Լ�
//void insertAfter(linkedlist_h* l, int x, listnode* p); // ���� ����Ʈ �߰��� ��� �����ϴ� �Լ�
//listnode* findnode(linkedlist_h* l, int x); //���� ����Ʈ���� ������ �˻��ϴ� �Լ�
//void deletelastnode(linkedlist_h* l); //������ ��� �����ϴ� �Լ�
//int deletenode(linkedlist_h* l, int x); //�����ϰ��� �ϴ� �����Ͱ� ����� ��� �����ϴ� �Լ�
//void reverse(linkedlist_h* l);//�������� ��ȸ �ϴ� �Լ�
//int main() {
//	linkedlist_h* l;
//	listnode* p;
//	l = createlinkedlist_h();
//	printf("(1) ���� ����Ʈ �����ϱ�! \n");
//	printlist(l);
//
//	printf("(2) ���� ����Ʈ�� ��� �߰��ϱ�! \n");
//	addlastnode(l, 10);   
//	addlastnode(l, 20);		
//	addlastnode(l, 30);
//	addlastnode(l, 40);
//	addlastnode(l, 50);
//	addlastnode(l, 60);
//	printlist(l);
//
//	printf("(3) ���� ����Ʈ �������� ��� �� �� �߰��ϱ�! \n");
//	addlastnode(l, 50);
//	printlist(l);
//	
//	printf("(4) 20�� ����� ��ġ�� ã�� 30�� 20 �ڿ� ����! \n");
//	p = findnode(l, 20);
//	insertAfter(l, 30, p);
//	printlist(l);
//	
//	printf("(5) 20�� ��� �����ϱ� \n");
//	deletenode(l, 20);
//	printlist(l);
//
//	printf("(6) ������ ��� �����ϱ� \n");
//	deletelastnode(l);
//	printlist(l);
//
//	printf("(7) ����Ʈ ���Ҹ� �������� ��ȭ�ϱ� \n");
//	reverse(l);
//	printlist(l);
//
//
//	getchar();
//	return 0;
//
//}
//
//linkedlist_h* createlinkedlist_h(void) { //���� ����Ʈ�� �ʱ�ȭ �ϴ� �Լ�
//	linkedlist_h* l;
//
//	l = (linkedlist_h*)malloc(sizeof(linkedlist_h)); //����� ������ Ȯ��
//	l->head = NULL;
//	return l;
//}
//void addlastnode(linkedlist_h* l, int x) { // ��带 �߰��ϴ� �Լ�
//	listnode* newnode;
//	listnode* p;
//
//	newnode = (listnode*)malloc(sizeof(listnode)); //���� �߰��� ��带 ������ �޸𸮸� �Ҵ�
//	newnode->data = x;
//	newnode->link = NULL;
//
//	if (l->head == NULL) { //ù ��° �߰��Ǵ� �����Ͷ��
//		l->head = newnode;
//		return;
//	}
//	p = l->head;
//	while (p->link != NULL) {	//������ ��尡 �ƴϸ� ��� �ݺ� ����
//		p = p->link;			//��ũ p�� �ڽ� ������ �����ϴ� ��带 ����Ű���� ��
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
//void insertAfter(linkedlist_h* l, int x, listnode* p) { //���� ����Ʈ �߰��� ��� �����ϴ� �Լ�
//	listnode* newnode;
//
//	newnode = (listnode*)malloc(sizeof(struct listnode)); //���� �߰��� ��带 ������ �޸� �Ҵ�
//	newnode->data = x; //������ �ʵ忡 ������ ����
//
//	if (l->head == NULL) { //ù ��° �߰��Ǵ� �����Ͷ��
//		newnode->link = NULL; // ��ũ �ʵ忡 NULL�� ����
//		l->head = newnode;
//	}
//	else if (p == NULL) { //p�� NULL�̸� ù ��° ���� ����
//		l->head = newnode;
//	}
//	else {// p ������ ����
//		newnode->link = p->link;
//		p->link = newnode;
//	}
//
//}
//
//listnode* findnode(linkedlist_h* l, int x) {  //���� ����Ʈ���� ������ �˻��ϴ� �Լ�
//	listnode* p;
//	p = l->head;  //linkedlist�� ó�� ����� head->link�� s�� �ʱⰪ���� ����
//	while (p != NULL) { //NULL�� �����ϸ� �ݺ����� ���
//		if (p->data == x) //�����͸� ã��
//			break;
//		p = p->link;
//	}
//	return p;
//}
//
//void deletelastnode(linkedlist_h* l) { //������ ��� �����ϴ� �Լ�
//	listnode* previous; //�����Ϸ��� ����� �ٷ� ���� ���
//	listnode* current; //�����Ϸ��� ���
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
//int deletenode(linkedlist_h* l, int x) { //�����ϰ��� �ϴ� �����Ͱ� ����� ��� �����ϴ� �Լ�
//	listnode* previous;
//	listnode* current;
//	if (l->head == NULL) //head�� NULL���ڰ� ������ ����
//		return;
//
//	previous = l->head;
//	current = previous->link;
//
//	while (previous != NULL) { //previous�� NULL�� �����ϸ� �ݺ������� �����.
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
//	p = l->head; //�������� ���� ����Ʈ
//	q = NULL;//�������� ���� ���
//	r = NULL;
//
//	while (p != NULL) {
//		r = q; //r�� �������� �� ����Ʈ, r�� q, q�� p�� ���ʷ� ���󰣴�.
//		q = p;
//		p = p->link;
//		q->link = r; //q�� ��ũ ������ �ٲ۴�.
//	}
//	l->head = q; // q�� �������� �� ����Ʈ�� ��� ������
//}

//typedef struct listnode {
//	int data; //��带 �����ϴ� ������ �ʵ�
//	struct listnode* link; // ������带 ����Ű�� ��ũ �ʵ�
//}listnode;
//typedef struct {
//	listnode* head; //����� ������ ������ ����ü ����
//}linkedlist_h;
//typedef int element;
//void addfrontnode(linkedlist_h* l, element x);// ���� ���� ����Ʈ�� ù ��° ���� ����
//void insertmiddlenode(linkedlist_h* l, listnode* pre, element x); // ���� ���� ����Ʈ�� �߰� ��� ����
//
//int main() {
//
//}

//
//void addfrontnode(linkedlist_h* l, element x) { // ���� ���� ����Ʈ�� ù ��° ���� ����
//	listnode* newnode;
//	listnode* p;
//
//	newnode = getnode();
//	newnode->data = x;
//
//	if (l->head == NULL) { // ���� ����Ʈ�� ��쿡 �����ϴ� ��� newnode�� ����Ʈ�� ù��° ������� ������ ��尡 �Ǿ�� �Ѵ�.
//		l->head = newnode; //������ �� ����� �ּҸ� ������ head�� �����Ѵ�.
//		newnode->link = newnode; //�� ��尡 �ڱ� �ڽ��� ����Ű�� �����ν� ù��° ��尡 ������ ��尡 �ǵ��� �����Ѵ�.
//	}
//	else { //�����尡 �ƴҽ� �ܼ� ���� ����Ʈ ó�� ������ ��忡 ���ο� ��θ� ����.
//		p = l->head;
//		while (p->link != l->head) //�ݺ����� �����ϸ鼭 ��ȸ ������ p�� ��ũ�� ���� ������ ������ �̵��Ѵ�.
//			p = p->link;
//		newnode->link = p->link;
//		p->link = newnode;
//		l->head = newnode;
//	}
//}
//void insertmiddlenode(linkedlist_h* l, listnode* pre, element x) { //���� ���� ����Ʈ�� �߰� ��� ����
//	listnode* newnode;
//	listnode* p;
//	//���� �߰��� ��带 ������ �޸� �Ҵ�
//	newnode = getnode();
//	newnode->data = x; //������ �ʵ忡 ������ ����
//
//	if (l->head == NULL) { // ���� ���� ���� ����Ʈ�� ���
//		l->head = newnode;
//		newnode->link = newnode;
//	}
//	else {
//		newnode->link = pre->link;
//		pre->link = newnode;
//	}
//}
