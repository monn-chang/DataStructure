#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<stdbool.h>

/*
typedef struct TreeNode { //�����͸� �̿��Ͽ� Ʈ���� �����ϴ� ��쿡 ����ϴ� ����ü
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


//���� ��ȸ(preorder traversal)
void preorder(TreeNode* ptr) { //���� ��ȸ(preorder traversal)�ϴ� ����Լ��� ����
	if (ptr) { //ptr�� NULL�̸� �� �̻� ���ȣ������ �ʴ´�.
		printf("%c ", ptr->data); // ptr�� �����͸� ����Ѵ�.
		preorder(ptr->left); // ptr�� ���� ����Ʈ���� ���ȣ���Ͽ� �湮�Ѵ�.
		preorder(ptr->right); // ptr�� ������ ����Ʈ���� ���ȣ���Ͽ� �湮�Ѵ�.
	}
}

//���� ��ȸ(inorder traversal)
void inorder(TreeNode* ptr) { //���� ��ȸ(inoder traversal)�ϴ� ����Լ��� ����
	if (ptr) { // ptr�� NULL�̸� ���̻� ���ȣ������ �ʴ´�.
		inorder(ptr->left); // ptr�� ���� ����Ʈ���� ���ȣ���Ͽ� �湮�Ѵ�.
		printf("%c ", ptr->data); //ptr�� �����͸� ����Ѵ�.
		inorder(ptr->right); // ptr�� ������ ����Ʈ���� ���ȣ���Ͽ� �湮�Ѵ�.
	}
}

//���� ��ȸ(postorder traversal)
void postorder(TreeNode* ptr) { //���� ��ȸ(postorder traversal)�ϴ� ����Լ��� ����
	if (ptr) { //ptr�� NULL�̸� ���̻� ���ȣ������ �ʴ´�.
		postorder(ptr->left); //ptr�� ���� ����Ʈ���� ���ȣ���Ͽ� �湮�Ѵ�.
		postorder(ptr->right); //ptr�� ������ ����Ʈ���� ���ȣ���Ͽ� �湮�Ѵ�.
		printf("%c ", ptr->data); //ptr�� �����͸� ����Ѵ�.
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

//���丮 �뷮 ����ϱ�

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

	printf("\n ���� �뷮 : %d \n", calcDirSize(root));

	getchar();
}

*/

/*

//������ ���� Ʈ��

typedef struct TreeNode {
	char data;
	struct TreeNode* left;
	struct TreeNode* right;
	int is_thread; //������ ��ũ�� �������̸� TRUE
	//TRUE�̸� right�� ���� �ļ��ڰ� �ǰ�, FALSE�̸� ������ �ڽ��� ����Ű�� �����Ͱ� �ȴ�.(is_thread��)
}TreeNode;

TreeNode* findThreadSuccessor(TreeNode* p) { // ���� �ļ��ڸ� ��ȯ�ϴ� �Լ�
	TreeNode* q = p->right;
	if (q == NULL) return q; //p�� ������ �ڽ��� NULL�̸� �� �̻� �ļ��ڰ� ���ٴ� ���̹Ƿ� NULL�� ��ȯ�Ѵ�.
	if (p->is_thread == true) return q; //is_thread�� true�̸� �ٷ� ������ �ڽ��� ���� �ļ��ڰ� �ǹǷ� ������ �ڽ��� ��ȯ�Ѵ�.
	while (q->left != NULL) q = q->left; //is_thread�� true�� �ƴ� ��쿡�� ���� Ʈ���� ���� ���� ���� �����Ѵ�. ���� ���� �ڽ��� NULL�� �� ������ ���� ��ũ�� Ÿ�� �̵��Ѵ�.
	return q;
}

void threadInorder(TreeNode* t) { // ������ ���� Ʈ���� ���� ��ȸ�ϴ� �Լ�
	TreeNode* q;
	q = t;
	while (q->left) q = q->left; //���� ��ȸ�� ���� ���� ������ ����, ���� �ڽ� ��尡 NULL�� ������ ���� ��ũ�� Ÿ�� �̵�.

	do { // �����͸� ����ϰ� ���� �ļ��ڸ� ã�� �Լ��� ȣ���Ͽ� �ļ��ڰ� NULL�� �ƴϸ� ��� ������ �ݺ��Ѵ�.
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