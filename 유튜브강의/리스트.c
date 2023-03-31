#include <stdio.h>
#include <string.h>
#include<malloc.h>

typedef struct NODE {
	char data[64];
	struct NODE* next;  //������


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
		/*�޸� �ʱ�ȭ ����
		ptr : �޸��� ũ�⸦ ������ ������
		value : �ʱ�ȭ ��
		size : �ʱ�ȭ ũ�� ��ȯ ��*/
		
	strcpy_s(pNode->data, sizeof(pNode->data), pszData);
		/*dest ���ڿ��� ������ ����

		size dest ������ ũ��

		source ������ ���� ���ڿ�*/
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
	


	////���
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

