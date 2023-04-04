#include <stdio.h>
#include <string.h>
#include<malloc.h>

typedef struct NODE {
	char data[64];
	struct NODE* next;  //������


}node;

//node* g_pHead = NULL;
node g_pHead = { 0 };
node* g_pTail = 0;

int isEmpty()
{

	if (g_pHead.next == NULL) {

		return 1;
	}
	return 0;
}
void PrintList(void) {

	if (isEmpty()) {
		printf("PrintList- ������ ����\n");
	}
	node* pHead = g_pHead.next;
	while (pHead != NULL) {
		printf("%p %s\n", pHead, pHead->data);
		pHead = pHead->next;
	}
	printf("\n");
}

int InsertAtHead(char* pszData) {
	node* pNode = (node*)malloc(sizeof(node));
	memset(pNode, 0, sizeof(node));
	/*�޸� �ʱ�ȭ ����
	ptr : �޸��� ũ�⸦ ������ ������
	value : �ʱ�ȭ ��
	size : �ʱ�ȭ ũ�� ��ȯ ��*/

	strcpy_s(pNode->data, sizeof(pNode->data), pszData);
	/*dest ���ڿ��� ������ ����

	size dest ������ ũ��

	source ������ ���� ���ڿ�*/
	if (isEmpty()) {
		//ù��° ������ó��
		g_pHead.next = pNode;
		g_pTail = pNode;
	}
	else {
		pNode->next = g_pHead.next;
		g_pHead.next = pNode;
	}
	return 1;
}

int InsertAtTail(char* pszData) {

	//tail point ������ �ʿ� ������
	//node* pTmp = &g_pHead;

	////������ ��� ã��
	//while (pTmp->next != 0) {
	//	pTmp = pTmp->next;
	//}

	//�׵ڿ� ����
	node* pNode = (node*)malloc(sizeof(node));
	memset(pNode, 0, sizeof(node));
	strcpy_s(pNode->data, sizeof(pNode->data), pszData);

	//pTmp->next = pNode;

	if (isEmpty()) 	g_pHead.next = pNode;

	else g_pTail->next = pNode;



	g_pTail = pNode;
}
node* FindData(char* pszData) {
	node* pCur = g_pHead.next;
	node* pPrev = &g_pHead;
	while (pCur != NULL) {
		if (strcmp(pCur->data, pszData) == 0) { 
			return pPrev;
			//ã�� ����� �� ��� �ּ� ��ȯ
		}
		pCur = pCur->next;
		pPrev = pPrev->next;
	}
	return 0;
}

int DeleteData(char* pszData) {
	node* nPrev = FindData(pszData);
	if (nPrev != 0) {
		node* pDelete = nPrev->next;
		nPrev->next = pDelete->next;
		printf("deletedata(): %s\n", pDelete->data);

		if (pDelete == g_pTail) g_pTail = 0;  //�������� �� ������ ����̸� �ΰ����� �ʱ�ȭ
		free(pDelete);
		return 1;
	}
	return 0;

	//node* pCur = g_pHead.next;
	//node* pPrev=&g_pHead;
	//while (pCur != NULL) {
	//	if (strcmp(pCur->data, pszData) == 0) {
	//		//����
	//		printf("%p %s ���� ����\n", pCur, pCur->data);
	//		pPrev->next = pCur->next;
	//		free(pCur);
	//		return 1;
	//	}
	//	pPrev = pCur;
	//	pCur = pCur->next;
	//}
	//return 0;

}



void RelaseList(void) {
	if (isEmpty()) {
		printf("RelaseList- ������ ����\n");
		return 0;
	}
	node* pTmp = g_pHead.next;
	while (pTmp != NULL) {
		node* delete = pTmp;
		pTmp = pTmp->next;

		printf("Delete: [%p] %s\n", delete, delete->data);
		free(delete);
	}
	g_pHead.next = NULL;
	g_pTail = NULL;
}

void PushData(char* data) {
	InsertAtHead(data);
}
int PopData(node* pPopNode) {
	node* sp = g_pHead.next;
	//sp = stack point
	if (isEmpty()) {
		printf("pop - ������ ����\n");
		return 0;
	}
	
	memcpy(pPopNode, sp, sizeof(node));
	g_pHead.next = sp->next;
	free(sp);
	return 1;

}

int Enqueue(char* pszData) {
	
	return InsertAtTail(pszData);
}

int Dequeue(node* pGetNode) {
	return PopData(pGetNode);
}
int main() {

	node node = { 0 };
	PopData(&node);

	RelaseList();

	printf("---------------\n");
	Enqueue("test1");
	Enqueue("test2");
	Enqueue("test3");

	PrintList();


	Dequeue(&node);
	printf("dequeue : %s\n", node.data);

	PrintList();

	Dequeue(&node);
	printf("dequeue : %s\n", node.data);
	PrintList();


	Dequeue(&node);
	printf("dequeue : %s\n", node.data);
	PrintList();




}

