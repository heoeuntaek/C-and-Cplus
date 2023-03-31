#include <stdio.h>
#include <string.h>
#include<malloc.h>

typedef struct NODE {
	char data[64];
	struct NODE* next;  //포인터


}node;

node* g_pHead = NULL;

void PrintList(void) {

	node* pHead = g_pHead;
	while (pHead != NULL) {
		printf("%p %s\n", pHead, pHead->data);
		pHead = pHead->next;
	}
	printf("\n");
}

int InsertNewNode(char* pszData) {
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
	if (g_pHead == NULL) {
		g_pHead = pNode;
	}
	else {
		pNode->next = g_pHead;
		g_pHead = pNode;
	}
	return 1;
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


	InsertNewNode("test1");
	PrintList();
	InsertNewNode("test2");
	PrintList();
	InsertNewNode("test3");



	PrintList();


	
}

