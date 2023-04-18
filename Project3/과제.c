#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;  //����ð�
	int service_time; //���� �ð�
	int arrival_time; //�����ð�
}element;

typedef struct NODE {
	struct NODE* link;
	int szData;
} Node;

typedef struct QUEUE {
	Node* front;
	Node* rear;
	int count;
} Queue;

Queue* InitQueue(void) { // QUEUE ����ü �����͸� �ʱ�ȭ
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	queue->front = queue->rear = NULL; // front�� rear ��� NULL�� �ʱ�ȭ
	queue->count = 0;
	return queue;
}

void enqueue(Queue* queue, int data) { // ť�� ���ϴ� �����͸� ����
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->szData = data;
	tmp->link = NULL;
	if (queue->count == 0) {
		queue->front = tmp;
	}

	else {
		queue->rear->link = tmp;
	}
	queue->rear = tmp;
	++queue->count;
}

void dequeue(Queue* queue, int num) {
	Node* cur;
	Node* tmp;
	cur = queue->front;
	int count = queue->count;

	while (num--) {
		if (cur == NULL) {
			puts("������ �������.\n");
			break;
		}

		else {
			printf("dequeued queue (%d) data = %d.\n", count + 1 - (queue->count--), cur->szData);
			tmp = cur->link;
			free(cur);
			cur = tmp;
		}
	}

	queue->front = cur;
}

void PrintQueue(Queue* queue) {
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp = queue->front;
	int count = queue->count - 1;
	puts("\nť ����Ʈ");

	while (tmp != NULL) {
		printf("Queue (%d) data = %d\n", queue->count - (count--), tmp->szData);
		tmp = tmp->link;
	}
	puts("ť ����Ʈ ��");
}

int main(int argc, const char* argv[]) {
	Queue* queue = InitQueue();

	dequeue(queue, 11);

	dequeue(queue, 12);

	dequeue(queue, 13);

	PrintQueue(queue);

	dequeue(queue, 21);

	dequeue(queue, 22);

	dequeue(queue, 23);

	PrintQueue(queue);

	dequeue(queue, 1);

	dequeue(queue, 2);

	dequeue(queue, 6);

	return 0;
}