#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef struct element {
	int id;  //현재시각
	int service_time; //서비스 시간
	int arrival_time; //도착시간
}element;

typedef struct{
	element data[MAX_QUEUE_SIZE];  //현재시각
	int front;
	int rear; //도착시간
}QueueType;


void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}
void init_quque(QueueType* q)
{
	q->front = 0;
	q->rear = 0;
}

int is_empty(QueueType* q)
{
	return (q->front == q->rear);
}

int is_full(QueueType* q)
{
	return q->front == (q->rear + 1) % MAX_QUEUE_SIZE;
}

void queue_print(QueueType* q)
{
	printf("QUEUE(front->%d rear->%d) =", q->front, q->rear);
	if (!is_empty(q)) {
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d |", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q)) {
		error("포화상태");
	}
	else
	{
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = item;
	}
}

element dequeue(QueueType* q)
{
	if (is_empty(q)) {
		error("공백상태");
	}
	else
	{
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		return q->data[q->front];
	}
}

/*
int main(void) {
	QueueType queue;
	int element;
	init_quque(&queue);
	while (!is_full(&queue))
	{
		printf("정수 입력:");
		scanf("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
	}
	printf("빼기\n");

	printf("%d",dequeue(&queue));
}
*/

void main() {
	QueueType queue;
	init_quque(&queue);
	int minutes = 60; // 총시각
	int total_wait = 0;  //총기다린시간
	int total_customer = 0; //총 손님수
	int service_time = 0;  //서비스시간
	int service_customer;

	srand(time(NULL));
	for (int clock = 0; clock < minutes; clock++)
	{
		printf("현재시각 = %d\n", clock);
		if (3 > rand() % 10)
		{
			element customer;
			customer.id = ++total_customer;
			customer.arrival_time = clock;// 도착시간 배정
			customer.service_time = (rand() % 3) + 1; //업무 시간
			enqueue(&queue, customer);
			printf("고객 %d이 %d분에 들어옵니다. 업무처리시간 = %d분\n", customer.id, customer.arrival_time, customer.service_time);
		}

		if (service_time > 0)
		{
			printf("고객%d이 업무중입니다.\n", service_customer);
			service_time--;

		}

		else {
			if (!is_empty(&queue))
			{
				element customer = dequeue(&queue);
				service_customer = customer.id;
				service_time = customer.service_time;
				printf("고객 %d이 %d분에 업무를 시작합니다.\n", customer.id, clock);
				printf("대기시간은 %d분이었습니다.\n", clock - customer.arrival_time);
				total_wait = total_wait + clock - customer.arrival_time;
			}
		}
	}printf("전체 대기시간=%d", total_wait);
	queue.data.
}