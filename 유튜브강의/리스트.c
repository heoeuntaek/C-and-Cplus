//#include <stdio.h>
//#include <string.h>
//#include<malloc.h>
//
//typedef struct NODE {
//	char data [64];
//	struct NODE* next;  //������
//
//}node;
//
////node* g_pHead = NULL;
//node head = { 0 };
//node* tail = 0;
//
//int isEmpty()
//{
//
//	if (head.next == NULL) {
//
//		return 1;
//	}
//	return 0;
//}
//void PrintList(void) {
//
//	if (isEmpty()) {
//		printf("PrintList- ������ ����\n");
//	}
//	node* pHead = head.next;
//	while (pHead != NULL) {
//		printf("%p %s\n", pHead, pHead->data);
//		pHead = pHead->next;
//	}
//	printf("\n");
//}
//
//int InsertAtHead(char* pszData) {
//	node* pNode = (node*)malloc(sizeof(node));
//	memset(pNode, 0, sizeof(node));
//	/*�޸� �ʱ�ȭ ����
//	ptr : �޸��� ũ�⸦ ������ ������
//	value : �ʱ�ȭ ��
//	size : �ʱ�ȭ ũ�� ��ȯ ��*/
//
//	strcpy_s(pNode->data, sizeof(pNode->data), pszData);
//	/*dest ���ڿ��� ������ ����
//
//	size dest ������ ũ��
//
//	source ������ ���� ���ڿ�*/
//	if (isEmpty()) {
//		//ù��° ������ó��
//		head.next = pNode;
//		tail = pNode;
//	}
//	else {
//		pNode->next = head.next;
//		head.next = pNode;
//	}
//	return 1;
//}
//
//int InsertAtTail(char* pszData) {
//
//	//tail point ������ �ʿ� ������
//	//node* pTmp = &g_pHead;
//
//	////������ ��� ã��
//	//while (pTmp->next != 0) {
//	//	pTmp = pTmp->next;
//	//}
//
//	//�׵ڿ� ����
//	node* pNode = (node*)malloc(sizeof(node));
//	memset(pNode, 0, sizeof(node));
//	strcpy_s(pNode->data, sizeof(pNode->data), pszData);
//
//	//pTmp->next = pNode;
//
//	if (isEmpty()) 	head.next = pNode;
//
//	else tail->next = pNode;
//
//
//
//	tail = pNode;
//}
//node* FindData(char* pszData) {
//	node* pCur = head.next;
//	node* pPrev = &head;
//	while (pCur != NULL) {
//		if (strcmp(pCur->data, pszData) == 0) {
//			return pPrev;
//			//ã�� ����� �� ��� �ּ� ��ȯ
//		}
//		pCur = pCur->next;
//		pPrev = pPrev->next;
//	}
//	return 0;
//}
//
//int DeleteData(char* pszData) {
//	node* nPrev = FindData(pszData);
//	if (nPrev != 0) {
//		node* pDelete = nPrev->next;
//		nPrev->next = pDelete->next;
//		printf("deletedata(): %s\n", pDelete->data);
//
//		if (pDelete == tail) tail = 0;  //�������� �� ������ ����̸� �ΰ����� �ʱ�ȭ
//		free(pDelete);
//		return 1;
//	}
//	return 0;
//
//	//node* pCur = g_pHead.next;
//	//node* pPrev=&g_pHead;
//	//while (pCur != NULL) {
//	//	if (strcmp(pCur->data, pszData) == 0) {
//	//		//����
//	//		printf("%p %s ���� ����\n", pCur, pCur->data);
//	//		pPrev->next = pCur->next;
//	//		free(pCur);
//	//		return 1;
//	//	}
//	//	pPrev = pCur;
//	//	pCur = pCur->next;
//	//}
//	//return 0;
//
//}
//
//
//
//void RelaseList(void) {
//	if (isEmpty()) {
//		printf("RelaseList- ������ ����\n");
//		return 0;
//	}
//	node* pTmp = head.next;
//	while (pTmp != NULL) {
//		node* delete = pTmp;
//		pTmp = pTmp->next;
//
//		printf("Delete: [%p] %s\n", delete, delete->data);
//		free(delete);
//	}
//	head.next = NULL;
//	tail = NULL;
//}
//
//void PushData(char* data) {
//	InsertAtHead(data);
//}
//int PopData(node* pPopNode) {
//	node* sp = head.next;
//	//sp = stack point
//	if (isEmpty()) {
//		printf("pop - ������ ����\n");
//		return 0;
//	}
//
//	memcpy(pPopNode, sp, sizeof(node));
//	head.next = sp->next;
//	free(sp);
//	return 1;
//
//}
//
//int Enqueue(char* pszData) {
//
//	return InsertAtTail(pszData);
//}
//
//int Dequeue(node* pGetNode) {
//	return PopData(pGetNode);
//}
//int main() {
//
//	InsertAtHead("#");
//	PrintList();
//
//	/*node node = { 0 };
//	PopData(&node);
//
//	RelaseList();
//
//	printf("---------------\n");
//	Enqueue("test1");
//	Enqueue("test2");
//	Enqueue("test3");
//
//	PrintList();
//
//
//	Dequeue(&node);
//	printf("dequeue : %s\n", node.data);
//
//	PrintList();
//
//	Dequeue(&node);
//	printf("dequeue : %s\n", node.data);
//	PrintList();
//
//
//	Dequeue(&node);
//	printf("dequeue : %s\n", node.data);
//	PrintList();*/
//
//
//
//
//}
//
