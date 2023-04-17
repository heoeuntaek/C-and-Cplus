#include <stdio.h>
#include <string.h>
#include<malloc.h>


typedef struct NODE {
	char data[64];
	struct NODE* prev;
	struct NODE* next;
}NODE;

NODE* head;
NODE* tail;
int g_nSize;

void InitList(void) {
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));

	memset(head, 0, sizeof(NODE));
	memset(tail, 0, sizeof(NODE));
	/*head->data = 0;
	tail->data = 0;*/ 

	strcpy_s(head->data, sizeof(head->data), "dummyHead");
	strcpy_s(tail->data, sizeof(head->data), "dummyTail");
	

	head->next = tail;
	//head->prev = head;

	tail->prev = head;
	//tail->next = tail;
	g_nSize = 0;



}

int isEmpty() {
	if (head->next == NULL) {
		return 1;
	}

	return 0;

}


void ReleaseList(void) {
	NODE* node = head;
	while (node != NULL) {
		NODE* pDelete = node;

		node = node->next;
		printf("free : %p\n", pDelete);
		free(pDelete);

	}

	head = NULL;
	tail= NULL;
	g_nSize = 0;
	printf("ReleaseList\n");






}

void PrintList(void) {
	printf("printList() : nSize: %d\n", g_nSize);
	printf("haad - %p, tail - %p\n\n", head, tail);
	/*if (isEmpty) {
		printf("printList- 노드가 빔\n");
		return;
	}*/
	NODE* node = head;
	
	while (node != NULL) {
	
		printf("%p %s %p\n", node->prev, node->data, node->next);
		node = node->next;
	}

}


//int로 반환하면 장점 o
int InsertAtHead(const char* pszData)// 포인터가 가리키는 내용이 읽기만 하기떄문(쓰기x)
{
	//노드 만들어서 데이터 저장
	NODE* newNode = malloc(sizeof(NODE));
	memset(newNode, 0, sizeof(NODE));

	strcpy_s(newNode->data, sizeof(newNode->data), pszData);

	//노드 연결 
	//헤드-> new-> 

	//비어있다면
	//if (isEmpty) {
	//	head->next = newNode;
	//	newNode->next = tail;

	//	newNode->prev = head;
	//	tail->prev = newNode;
	//	return 0;
	//}

	newNode->next = head->next;
	newNode->prev = head; 
	
	head->next = newNode;
	newNode->next->prev = newNode;
	g_nSize++;
	return g_nSize;



}

int InsertAtTail(const char* pszData) {

	NODE* newNode = (NODE*)malloc(sizeof(NODE));
	memset(newNode, 0, sizeof(NODE));
	strcpy_s(newNode->data, sizeof(newNode->data), pszData);

	/*if (isEmpty) {
		head->next = newNode;
		newNode->next = tail;

		newNode->prev = head;
		tail->prev = newNode;
		return 0;
	}*/


	newNode->next = tail;
	newNode->prev = tail->prev; 
	
	tail->prev = newNode;
	newNode->prev->next = newNode;
	g_nSize++;
	return 1;





}

NODE* FindNode(const char* pszData) {
	NODE* pNode;
	pNode = head;
	
	while (pNode != NULL) {
		if (strcmp(pNode->data, pszData) == 0) {
			printf("Find!!\n");
			return pNode;
		}
		pNode = pNode->next;
		
	}
	printf("find failed");
	return 0;
}

int DeleteNode(const char* pszData) {
	NODE* delete = FindNode(pszData);

	delete->prev->next = delete->next;
	delete->next->prev = delete->prev;
	printf("delete - %p, %s\n", delete, delete->data);
	free(delete);
	
	g_nSize--;
	return 1;
}

int GetSize(void) {
	return g_nSize;
}

int GetLength(void) {
	return GetSize();
}
int main(void)
{
	InitList();
	//printf("여기%s", tail->data);
	/*InsertAtHead("faf");
	InsertAtHead("asd");*/
	InsertAtTail("1");
	InsertAtTail("2");
	PrintList();
	
	DeleteNode("2");
	PrintList();
	
	
}

