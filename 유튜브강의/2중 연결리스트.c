#include <stdio.h>
#include <string.h>
#include<malloc.h>


typedef struct NODE {
	char* pszData;
	struct NODE* prev;
	struct NODE* next;
}NODE;

NODE* head;
NODE* tail;
int g_nSize;

void InitList(void) {
	head = (NODE*)malloc(sizeof(NODE));
	head->next = tail;
	head->prev = head;

	tail = (NODE*)malloc(sizeof(NODE));
	tail->prev = head;
	tail->next = tail;
	g_nSize = 0;

}

int isEmpty() {
	if (head->next == tail) {
		return 1;
	}

	return 0;

}


void ReleaseList(void) {




}

void PrintList(void) {

}


//int�� ��ȯ�ϸ� ���� o
int InsertAtHead(const char* pszData)// �����Ͱ� ����Ű�� ������ �б⸸ �ϱ⋚��(����x)
{
	//��� ���� ������ ����
	NODE* newNode;
	memcpy(newNode, 0, sizeof(newNode));
	strcpy_s(newNode->pszData, sizeof(newNode->pszData), pszData);

	//��� ���� 
	//���-> new-> 

	//����ִٸ�
	if (isEmpty) {
		head->next = newNode;
		newNode->next = tail;

		newNode->prev = head;
		tail->prev = newNode;

	}
	else {
		newNode->next = head->next;
		head->next = newNode;

		newNode->next->prev = newNode;
		newNode->prev = head;
	}

	//���� �ʴٸ�



	return 0;
}

int InsertAtTail(const char* pszData) {

	NODE* newNode;
	memcpy(newNode, 0, sizeof(newNode));
	strcpy_s(newNode->pszData, sizeof(newNode->pszData), pszData);

	if (isEmpty) {
		head->next = newNode;
		newNode->next = tail;

		newNode->prev = head;
		tail->prev = newNode;

	}
	else {

	}



}

NODE* FindNode(const char* pszData) {
	return 0;
}

int DeleteNode(const char* pszData) {
	NODE* pNode = FindNode(pszData);
	return 0;
}

int GetSize(void) {
	return g_nSize;
}

int GetLength(void) {
	return GetSize();
}
int main(void)
{
	return 0;
}

