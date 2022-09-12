#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int id;  //현재시각
	int service_time; //서비스 시간
	int arrival_time; //도착시간
}element;

typedef struct NODE {
	struct NODE* link;
	int data;
} Node;

typedef struct QUEUE {
	Node* front;
	Node* rear;
	int count;
} Queue;

Queue* InitQueue(void) { // QUEUE 구조체 포인터를 초기화
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	queue->front = queue->rear = NULL; // front와 rear 모두 NULL로 초기화
	queue->count = 0;
	return queue;
}

void enqueue(Queue* queue, int data) { // 큐에 원하는 데이터를 저장
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = data;
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
			puts("쿼리가 비어있음.\n");
			break;
		}

		else {
			printf("dequeued queue (%d) data = %d.\n", count + 1 - (queue->count--), cur->data);
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
	puts("\n큐 프린트");

	while (tmp != NULL) {
		printf("Queue (%d) data = %d\n", queue->count - (count--), tmp->data);
		tmp = tmp->link;
	}
	puts("큐 프린트 끝");
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