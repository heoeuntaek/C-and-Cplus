#include <stdio.h>
#include <string.h>
#include<malloc.h>

typedef struct NODE {
	char data[64];
	struct NODE* next;  //������


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
	/*�޸� �ʱ�ȭ ����
	ptr : �޸��� ũ�⸦ ������ ������
	value : �ʱ�ȭ ��
	size : �ʱ�ȭ ũ�� ��ȯ ��*/

	strcpy_s(pNode->data, sizeof(pNode->data), pszData);
	/*dest ���ڿ��� ������ ����

	size dest ������ ũ��

	source ������ ���� ���ڿ�*/
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

	//������ ��� ã��
	while (pTmp->next != 0) {
		pTmp = pTmp->next;
	}

	//�׵ڿ� ����
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



	////���
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

