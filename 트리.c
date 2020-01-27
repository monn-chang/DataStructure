#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<stdbool.h>

/*
typedef struct TreeNode { //포인터를 이용하여 트리를 구현하는 경우에 사용하는 구조체
	char data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode;

TreeNode* makeRootNode(char data, TreeNode* leftNode, TreeNode* rightNode) {
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}


//전위 순회(preorder traversal)
void preorder(TreeNode* ptr) { //전위 순회(preorder traversal)하는 재귀함수의 정의
	if (ptr) { //ptr이 NULL이면 더 이상 재귀호출하지 않는다.
		printf("%c ", ptr->data); // ptr의 데이터를 출력한다.
		preorder(ptr->left); // ptr의 왼쪽 서브트리를 재귀호출하여 방문한다.
		preorder(ptr->right); // ptr의 오른쪽 서브트리를 재귀호출하여 방문한다.
	}
}

//중위 순회(inorder traversal)
void inorder(TreeNode* ptr) { //중위 순회(inoder traversal)하는 재귀함수의 정의
	if (ptr) { // ptr이 NULL이면 더이상 재귀호출하지 않는다.
		inorder(ptr->left); // ptr의 왼쪽 서브트리를 재귀호출하여 방문한다.
		printf("%c ", ptr->data); //ptr의 데이터를 출력한다.
		inorder(ptr->right); // ptr의 오른쪽 서브트리를 재귀호출하여 방문한다.
	}
}

//후위 순회(postorder traversal)
void postorder(TreeNode* ptr) { //후위 순회(postorder traversal)하는 재귀함수의 정의
	if (ptr) { //ptr이 NULL이면 더이상 재귀호출하지 않는다.
		postorder(ptr->left); //ptr의 왼쪽 서브트리를 재귀호출하여 방문한다.
		postorder(ptr->right); //ptr의 오른쪽 서브트리를 재귀호출하여 방문한다.
		printf("%c ", ptr->data); //ptr의 데이터를 출력한다.
	}
}

int main() {
	TreeNode* n1, * n2, * n3, * n4, * n5, * n6, * n7;
	n7 = makeRootNode('G', NULL, NULL);
	n6 = makeRootNode('F', NULL, NULL);
	n5 = makeRootNode('E', NULL, NULL);
	n4 = makeRootNode('D', NULL, NULL);
	n3 = makeRootNode('C', n6, n7);
	n2 = makeRootNode('B', n4, n5);
	n1 = makeRootNode('A', n2, n3);

	TreeNode* root = n1;
	printf("\n inorder : ");
	inorder(root);
	printf("\n preorder : ");
	preorder(root);
	printf("\n postorder : ");
	postorder(root);

	getchar();
}


*/

/*

//디렉토리 용량 계산하기

typedef struct TreeNode {
	int data;
	struct TreeNode* left;
	struct TreeNode* right;
}TreeNode; 

TreeNode* makeRootNode(int data, TreeNode* leftNode, TreeNode* rightNode) {
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

int calcDirSize(TreeNode* ptr) {
	int leftSize, rightSize;
	if (ptr) {
		leftSize = calcDirSize(ptr->left);
		rightSize = calcDirSize(ptr->right);
		return(ptr->data + leftSize + rightSize);
	}
	return 0;
}

int main() {
	TreeNode* n1, * n2, * n3, * n4, * n5;

	n5 = makeRootNode(500, NULL, NULL);
	n4 = makeRootNode(200, NULL, NULL);
	n3 = makeRootNode(100, n4, n5);
	n2 = makeRootNode(50, NULL, NULL);
	n1 = makeRootNode(0, n2, n3);

	TreeNode* root = n1;

	printf("\n 폴더 용량 : %d \n", calcDirSize(root));

	getchar();
}

*/

/*

//스레드 이진 트리

typedef struct TreeNode {
	char data;
	struct TreeNode* left;
	struct TreeNode* right;
	int is_thread; //오른쪽 링크가 스레드이면 TRUE
	//TRUE이면 right는 중위 후속자가 되고, FALSE이면 오른쪽 자식을 가리키는 포인터가 된다.(is_thread가)
}TreeNode;

TreeNode* findThreadSuccessor(TreeNode* p) { // 중위 후속자를 반환하는 함수
	TreeNode* q = p->right;
	if (q == NULL) return q; //p의 오른쪽 자식이 NULL이면 더 이상 후속자가 없다는 것이므로 NULL을 반환한다.
	if (p->is_thread == true) return q; //is_thread가 true이면 바로 오른쪽 자식이 중위 후속자가 되므로 오른쪽 자식을 반환한다.
	while (q->left != NULL) q = q->left; //is_thread가 true가 아닌 경우에는 서브 트리의 가장 왼쪽 노드로 가야한다. 따라서 왼쪽 자식이 NULL이 될 때까지 왼쪽 링크를 타고 이동한다.
	return q;
}

void threadInorder(TreeNode* t) { // 스레드 이진 트리를 중위 순회하는 함수
	TreeNode* q;
	q = t;
	while (q->left) q = q->left; //중위 순회는 가장 왼쪽 노드부터 시작, 왼쪽 자식 노드가 NULL일 때까지 왼쪽 링크를 타고 이동.

	do { // 데이터를 출력하고 중위 후속자를 찾는 함수를 호출하여 후속자가 NULL이 아니면 계속 루프를 반복한다.
		printf("%c ", q->data);
		q = findThreadSuccessor(q);
	} while (q);

}

TreeNode* makeRootNode(char data, TreeNode* leftNode, TreeNode* rightNode, int is_thread) {
	TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
	root->data = data;
	root->left = leftNode;
	root->right = rightNode;
	root->is_thread = is_thread;
	return root;
}

int main() {
	TreeNode* n1, * n2, * n3, * n4, * n5, * n6, * n7;
	n7 = makeRootNode('D', NULL, NULL, 0);
	n6 = makeRootNode('C', NULL, NULL, 1);
	n5 = makeRootNode('B', NULL, NULL, 1);
	n4 = makeRootNode('A', NULL, NULL, 1);

	n3 = makeRootNode('-', n6, n7, 0);
	n2 = makeRootNode('+', n4, n5, 0);
	n1 = makeRootNode('*', n2, n3, 0);

	n4->right = n2;
	n5->right = n1;
	n6->right = n3;

	TreeNode* root = n1;
	printf("\n inorder : ");
	threadInorder(root);

	getchar();
}

*/