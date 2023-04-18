//#include <stdio.h>
//#include <string.h>
//#include<malloc.h>
//
//
//typedef struct NODE {
//	char data[64];
//	struct NODE* prev;
//	struct NODE* next;
//}NODE;
//
//NODE* head;
//NODE* tail;
//int NSize;
//
//
//void InsertBefore(NODE* node, const char* pszData);
//
//void InitList(void) {
//	head = (NODE*)malloc(sizeof(NODE));
//	tail = (NODE*)malloc(sizeof(NODE));
//
//	memset(head, 0, sizeof(NODE));
//	memset(tail, 0, sizeof(NODE));
//	/*head->data = 0;
//	tail->data = 0;*/
//
//	strcpy_s(head->data, sizeof(head->data), "dummyHead");
//	strcpy_s(tail->data, sizeof(head->data), "dummyTail");
//
//
//	head->next = tail;
//	//head->prev = head;
//
//	tail->prev = head;
//	//tail->next = tail;
//	NSize = 0;
//
//
//
//}
//
//int isEmpty() {
//	if (NSize == 0) {
//		return 1;
//	}
//	return 0;
//
//}
//
//
//void ReleaseList(void) {
//	NODE* node = head;
//	while (node != NULL) {
//		NODE* pDelete = node;
//
//		node = node->next;
//		printf("free : %p\n", pDelete);
//		free(pDelete);
//
//	}
//
//	head = NULL;
//	tail = NULL;
//	NSize = 0;
//	printf("ReleaseList\n");
//
//
//
//
//
//
//}
//
//void PrintList(void) {
//	printf("printList() : nSize: %d\n", NSize);
//	printf("haad - %p, tail - %p\n\n", head, tail);
//	/*if (isEmpty) {
//		printf("printList- 노드가 빔\n");
//		return;
//	}*/
//	NODE* node = head;
//	int idx = 0;
//	while (node != NULL) {
//		if (node != head && node != tail) {
//			printf("index = %d %p %s %p\n", idx, node->prev, node->data, node->next);
//			idx++;
//		}
//		else {
//			printf("%p %s %p\n", node->prev, node->data, node->next);
//
//		}
//		node = node->next;
//		
//	}
//
//}
//
//
////int로 반환하면 장점 o
//int InsertAtHead(const char* pszData)// 포인터가 가리키는 내용이 읽기만 하기떄문(쓰기x)
//{
//	//노드 만들어서 데이터 저장
//	NODE* newNode = malloc(sizeof(NODE));
//	memset(newNode, 0, sizeof(NODE));
//
//	strcpy_s(newNode->data, sizeof(newNode->data), pszData);
//
//	//노드 연결 
//	//헤드-> new-> 
//
//	//비어있다면
//	//if (isEmpty) {
//	//	head->next = newNode;
//	//	newNode->next = tail;
//
//	//	newNode->prev = head;
//	//	tail->prev = newNode;
//	//	return 0;
//	//}
//
//	newNode->next = head->next;
//	newNode->prev = head;
//
//	head->next = newNode;
//	newNode->next->prev = newNode;
//	NSize++;
//	return NSize;
//
//
//
//}
//
//int InsertAtTail(const char* pszData) {
//	InsertBefore(tail, pszData);
//	return 1;
//
//	//NODE* newNode = (NODE*)malloc(sizeof(NODE));
//	//memset(newNode, 0, sizeof(NODE));
//	//strcpy_s(newNode->data, sizeof(newNode->data), pszData);
//
//	//
//	///*if (isEmpty) {
//	//	head->next = newNode;
//	//	newNode->next = tail;
//
//	//	newNode->prev = head;
//	//	tail->prev = newNode;
//	//	return 0;
//	//}*/
//
//
//	//newNode->next = tail;
//	//newNode->prev = tail->prev;
//
//	//tail->prev = newNode;
//	//newNode->prev->next = newNode;
//	//NSize++;
//	//return 1;
//
//
//
//
//
//}
//
//void InsertBefore(NODE* node, const char* pszData) {
//	NODE* prevNode = node->prev;
//
//	NODE* newNode = malloc(sizeof(NODE));
//	memset(newNode, 0, sizeof(NODE));
//	strcpy_s(newNode->data, sizeof(newNode->data), pszData);
//
//	newNode->prev = prevNode;
//	newNode->next = node;
//
//	node->prev = newNode;
//	prevNode->next = newNode;
//
//
//
//	NSize++;
//}
//
//NODE* FindNode(const char* pszData) {
//	NODE* pNode = head->next;
//
//	while (pNode != tail) {
//		if (strcmp(pNode->data, pszData) == 0) {
//			printf("Find!!\n");
//			return pNode;
//		}
//		pNode = pNode->next;
//
//	}
//	printf("find failed");
//	return 0;
//}
//
//int DeleteNode(const char* pszData) {
//	NODE* delete = FindNode(pszData);
//
//	delete->prev->next = delete->next;
//	delete->next->prev = delete->prev;
//	printf("delete - %p, %s\n", delete, delete->data);
//	free(delete);
//
//	NSize--;
//	return 1;
//}
//
//int GetSize(void) {
//	return NSize;
//}
//
//int GetLength(void) {
//	return GetSize();
//}
//
//int InsertAt(int idx, const char* pszdata) {
//
//	NODE* node = head->next;
//	int i = 0;  //head  = -1  head->next = 0
//
//	while (node != tail) {
//		if (i == idx) {
//			InsertBefore(node, pszdata);
//			return i;
//		}
//		node = node->next;
//		i++;
//	}
//	//원하는 인덱스가 없을 경우			  
//	InsertAtTail(pszdata);
//	return i;
//
//
//
//}
//
//NODE* GetAt(int idx) {
//	NODE* node = head->next;
//	int count = idx;
//	int i = 0;
//
//	while (node != tail) {
//		if (i == idx) {
//			return node;
//
//		}
//		node = node->next;
//		i++;
//
//	}
//
//	printf("getAt찾는 인덱스의 노드가 없음\n");
//	return NULL;
//}
//int main(void)
//{
//	InitList();
//	//printf("여기%s", tail->data);
//	/*InsertAtHead("faf");
//	InsertAtHead("asd");*/
//	InsertAtTail("a");
//	InsertAtTail("b");
//	InsertAtTail("c");
//	PrintList();
//
//	printf("find - %s\n", FindNode("a")->data);
//	printf("find - %s\n", FindNode("b")->data);
//
//	//DeleteNode("2");
//	//PrintList();
//
//	printf("-------------------\n");
//	InsertAt(2, "2번");
//	PrintList();
//	printf("getAt - %p, %s", GetAt(2), GetAt(2)->data);
//}
//
