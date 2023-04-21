#include <stdio.h>
#include <string.h>
#include<malloc.h>


typedef struct NODE {
	//USERDATA* pData;
	void* pData;
	

	struct NODE* prev;
	struct NODE* next;
}NODE;

NODE* head;
NODE* tail;
int NSize;

int InsertAtHead(void* pParam);
int InsertAtTail(void* pParam);
void InsertBefore(NODE* node, void* pParam); 


typedef struct USERDATA {
	//��� �Լ� ������
	const char* (*GetKey)(void*);
	
	
	char name[64];
	char phone[64];
}USERDATA;

//�Լ��̰� ��ȯ�� char�� point
const char* GetKeyFromUserData(USERDATA* pUser) {
	return pUser->name;
}

USERDATA* createUserData(const char* pszName, const char* pszPhone) {
	USERDATA* pNewData = malloc(sizeof(USERDATA));
	memset(pNewData, 0, sizeof(USERDATA));
	strcpy_s(pNewData->name, sizeof(pNewData->name), pszName);
	strcpy_s(pNewData->phone, sizeof(pNewData->phone), pszPhone);

	//����ü ��� �Լ� ������ �ʱ�ȭ
	pNewData->GetKey = GetKeyFromUserData;
	//InsertAtTail(pNewData);
	return pNewData;
}


void InitList(void) {
	head = (NODE*)malloc(sizeof(NODE));
	tail = (NODE*)malloc(sizeof(NODE));

	memset(head, 0, sizeof(NODE));
	memset(tail, 0, sizeof(NODE));
	/*head->data = 0;
	tail->data = 0;*/

	//strcpy_s(head->szData, sizeof(head->szData), "dummyHead");
	//strcpy_s(tail->szData, sizeof(head->szData), "dummyTail");


	head->next = tail;
	//head->prev = head;

	tail->prev = head;
	//tail->next = tail;
	NSize = 0;



}

int isEmpty() {
	if (NSize == 0) {
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
		free(pDelete->pData);
		free(pDelete);

	}

	head = NULL;
	tail = NULL;
	NSize = 0;
	printf("ReleaseList\n");






}

void PrintList(void) {
	printf("printList() : nSize: %d\n", NSize);
	printf("haad - %p, tail - %p\n\n", head, tail);
	/*if (isEmpty) {
		printf("printList- ��尡 ��\n");
		return;
	}*/
	NODE* node = head;
	int idx = 0;
	while (node != NULL) {
		if (node == head || node == tail) {
			puts("[Dummy]");

		}

		else {
			USERDATA* pUser = node->pData;
			printf("index = %d :  %s\n", idx,
				pUser->GetKey(pUser)
				//node->GetKey(node->pData)
			);
			idx++;
		}
		//���� tail �϶�

		node = node->next;

	}

}


//int�� ��ȯ�ϸ� ���� o
int InsertAtHead(void* pParam)// �����Ͱ� ����Ű�� ������ �б⸸ �ϱ⋚��(����x)
{

	NODE* pNewNode = malloc(sizeof(NODE));
	memset(pNewNode, 0, sizeof(NODE));



	//��� ���� ������ ����
	// ������� ���� �ʱ�ȭ
	pNewNode->pData = pParam;

	/*pNewNode->GetKey = pfParam;*/
	//strcpy_s(pNewNode->szData, sizeof(pNewNode->szData), pszData);

	//��� ���� 
	//���-> new-> 

	//����ִٸ�
	//if (isEmpty) {
	//	head->next = newNode;
	//	newNode->next = tail;

	//	newNode->prev = head;
	//	tail->prev = newNode;
	//	return 0;
	//}

	//���Ḯ��Ʈ �ʱ�ȭ
	pNewNode->next = head->next;
	pNewNode->prev = head;

	head->next = pNewNode;
	pNewNode->next->prev = pNewNode;
	NSize++;
	return NSize;



}

int InsertAtTail(void* pParam) {
	InsertBefore(tail, pParam);
	return 1;

	//NODE* newNode = (NODE*)malloc(sizeof(NODE));
	//memset(newNode, 0, sizeof(NODE));
	//strcpy_s(newNode->data, sizeof(newNode->data), pszData);

	//
	///*if (isEmpty) {
	//	head->next = newNode;
	//	newNode->next = tail;

	//	newNode->prev = head;
	//	tail->prev = newNode;
	//	return 0;
	//}*/


	//newNode->next = tail;
	//newNode->prev = tail->prev;

	//tail->prev = newNode;
	//newNode->prev->next = newNode;
	//NSize++;
	//return 1;





}

void InsertBefore(NODE* node, void* pParam) {
	NODE* prevNode = node->prev;

	NODE* newNode = malloc(sizeof(NODE));
	memset(newNode, 0, sizeof(NODE));
	//strcpy_s(newNode->szData, sizeof(newNode->szData), pszName);

	newNode->pData = pParam;
	//newNode->GetKey = pfParam;

	newNode->prev = prevNode;
	newNode->next = node;

	node->prev = newNode;
	prevNode->next = newNode;



	NSize++;
}

NODE* FindNode(const char* pszKey) {
	NODE* pNode = head->next;
	const char* (*pfGetKey)(void*) = NULL;

	while (pNode != tail) {

		//���� ��� ������ ����ü ù��° ����� �Լ� ������ ���� ����
		pfGetKey = pNode->pData;
		if (strcmp(pfGetKey(pNode->pData), pszKey) == 0) {
			printf("Find!!\n");
			return pNode;
		}
		pNode = pNode->next;

	}
	printf("find failed");
	return 0;
}

int DeleteNode(const char* pszKey) {
	NODE* delete = FindNode(pszKey);

	delete->prev->next = delete->next;
	delete->next->prev = delete->prev;
	//printf("delete - %p, %s\n", delete, delete->pData->name);
	free(delete->pData);
	free(delete);

	NSize--;
	return 1;
}

int GetSize(void) {
	return NSize;
}

int GetLength(void) {
	return GetSize();
}

int InsertAt(int idx, void* pParam) {

	NODE* node = head->next;
	int i = 0;  //head  = -1  head->next = 0

	while (node != tail) {
		if (i == idx) {
			InsertBefore(node, pParam);
			return i;
		}
		node = node->next;
		i++;
	}
	//���ϴ� �ε����� ���� ���			  
	InsertAtTail(pParam);
	return i;



}

NODE* GetAt(int idx) {
	NODE* node = head->next;
	int count = idx;
	int i = 0;

	while (node != tail) {
		if (i == idx) {
			return node;

		}
		node = node->next;
		i++;

	}

	printf("getAtã�� �ε����� ��尡 ����\n");
	return NULL;
}
int main(void)
{
	InitList();
	//printf("����%s", tail->data);
	/*InsertAtHead("faf");
	InsertAtHead("asd");*/
	USERDATA* pNewData = NULL;
	pNewData =createUserData("euntaek", "010-9155-9149");
	InsertAtTail(pNewData);
	pNewData = createUserData("euntaee", "012-9155-9149");
	InsertAtTail(pNewData);
	

	
	PrintList();
}

