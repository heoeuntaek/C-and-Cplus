/*

#include <stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
}ListNode;

ListNode* insert_first(ListNode* head, int value) {
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = head;
	head = p;
	return head;
}

ListNode* insert(ListNode* head, ListNode* pre, element value)
{
	ListNode* p = (ListNode*)malloc(sizeof(ListNode));
	p->data = value;
	p->link = pre->link;
	pre->link = p;
}
	
ListNode* delete_first(ListNode* head) {
	ListNode* removed;
	if (head == NULL) return NULL;
	removed = head;
	head = removed->link;
	free(removed);
	return head;
}
ListNode* delete(ListNode* head, ListNode* pre) {
	ListNode* removed;
	removed = pre->link;
	pre->link = removed->link;
	free(removed);
}
void print_list(ListNode* head) {
	for (ListNode* p = head; p != NULL; p = p->link)
	{
		printf("%d->", p->data);
	}printf("NULL\n");
}

//찾기
ListNode* search_list(ListNode* head, element x)
{
	ListNode* p = head;

	while (p != NULL) {
		if (p->data == x) return p;
		p = p->link;
	}
	return NULL;	// 탐색 실패
}
//역순
ListNode* reverse(ListNode* head)
{
	// 순회 포인터로 p, q, r을 사용
	ListNode* p, * q, * r;

	p = head;         // p는 역순으로 만들 리스트
	q = NULL;        // q는 역순으로 만들 노드
	while (p != NULL) {
		r = q;          // r은 역순으로 된 리스트.    
			// r은 q, q는 p를 차례로 따라간다.
		q = p;
		p = p->link;
		q->link = r;      // q의 링크 방향을 바꾼다.
	}
	return q;
}


void main() {
	ListNode* head = NULL;

	for (int i = 1; i <= 5; i++) {
		head = insert_first(head, i);
		print_list(head);
	}
		printf("%d",search_list(head, 2));	
	
}

*/