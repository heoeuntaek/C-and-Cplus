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


//int로 반환하면 장점 o
int InsertAtHead(const char* pszData)// 포인터가 가리키는 내용이 읽기만 하기떄문(쓰기x)
{
	//노드 만들어서 데이터 저장
	NODE* newNode;
	memcpy(newNode, 0, sizeof(newNode));
	strcpy_s(newNode->pszData, sizeof(newNode->pszData), pszData);

	//노드 연결 
	//헤드-> new-> 

	//비어있다면
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

	//비지 않다면



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

