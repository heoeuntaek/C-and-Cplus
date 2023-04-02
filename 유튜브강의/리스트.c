#include <stdio.h>
#include <string.h>
#include<malloc.h>

typedef struct NODE {
	char data[64];
	struct NODE* next;  //포인터


}node;

//node* g_pHead = NULL;
node g_pHead = { 0 };

int isEmpty()
{

	if (g_pHead.next == NULL) {

		return 1;
	}
	return 0;
}
void PrintList(void) {

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
	/*메모리 초기화 위해
	ptr : 메모리의 크기를 변경할 포인터
	value : 초기화 값
	size : 초기화 크기 반환 값*/

	strcpy_s(pNode->data, sizeof(pNode->data), pszData);
	/*dest 문자열을 복사할 버퍼

	size dest 버퍼의 크기

	source 복사할 원본 문자열*/
	if (isEmpty()) {
		g_pHead.next = pNode;
	}
	else {
		pNode->next = g_pHead.next;
		g_pHead.next = pNode;
	}
	return 1;
}

int InsertAtTail(char* pszData) {
	node* pTmp = &g_pHead;

	//마지막 노드 찾기
	while (pTmp->next != 0) {
		pTmp = pTmp->next;
	}

	//그뒤에 연결
	node* pNode = (node*)malloc(sizeof(node));
	memset(pNode, 0, sizeof(node));
	strcpy_s(pNode->data, sizeof(pNode->data), pszData);

	pTmp->next = pNode;

}
node* FindData(char* pszData) {
	node* pCur = g_pHead.next;
	node* pPrev = &g_pHead;
	while (pCur != NULL) {
		if (strcmp(pCur->data, pszData) == 0) {
			return pPrev;
			//찾은 노드의 앞 노드 주소 반환
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
		free(pDelete);
		return 1;
	}
	return 0;

	//node* pCur = g_pHead.next;
	//node* pPrev=&g_pHead;
	//while (pCur != NULL) {
	//	if (strcmp(pCur->data, pszData) == 0) {
	//		//삭제
	//		printf("%p %s 성공 삭제\n", pCur, pCur->data);
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
	node* pTmp = g_pHead.next;
	while (pTmp != NULL) {
		node* delete = pTmp;
		pTmp = pTmp->next;

		printf("Delete: [%p] %s\n", delete, delete->data);
		free(delete);
	}
	g_pHead.next = NULL;
}
int main() {
	/*node list[5];
	list[0].next = &list[1];
	list[1].next = &list[2];
	list[2].next = &list[3];
	list[3].next = &list[4];
	list[4].next = NULL;

	list[0].data = 0;
	list[1].data = 1;
	list[2].data = 2;
	list[3].data = 3;
	list[4].data = 4;*/



	////출력
	//node* tmp = &list[0];
	//while (tmp != NULL) {		
	//	printf("%p %d\n", tmp, tmp->data);
	//	tmp = tmp->next;
	//}


	InsertAtHead("test1");
	PrintList();
	InsertAtHead("test2");
	PrintList();
	InsertAtHead("test3");



	PrintList();

	RelaseList();
	/*DeleteData("test3");
	DeleteData("test2");
	DeleteData("test1");*/


	PrintList();

	//int a =FindData("test1");



}

