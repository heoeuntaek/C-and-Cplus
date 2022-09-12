#define _CRT_SECURE_NO_WARNINGS
#define MAX_QUEUE_SIZE 5
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef int element;
typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType* q)  // 초기화
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
	return(q->front == (q->rear + 1) % MAX_QUEUE_SIZE);
}

void queue_print(QueueType* q)
{
	printf("QUEUE(rear=%d, front = %d) =", q->rear, q->front);
	if (!is_empty(q))
	{
		int i = q->front;
		do {
			i = (i + 1) % (MAX_QUEUE_SIZE);
			printf("%d|", q->data[i]);
			if (i == q->rear)
				break;
		} while (i != q->front);
	}
	printf("\n");
}

void enqueue(QueueType* q, int item)
{
	if (is_full(q))
		printf("꽉찼습니다\n");
	else
	{
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = item;
	}
}
int dequeue(QueueType* q)
{
	if (is_empty(q))
		printf("비었습니다.\n");
	else
	{
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		return q->data[q->front];
	}
}

int main() {
	QueueType queue;
	int element;
	init_queue(&queue);
	while (!is_full(&queue))
	{
		printf("정수 입력");
		scanf("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
		printf("\n");
	}
	printf("큐는 포화상태입니다.\n");

	while (!is_empty(&queue))
	{
		element = dequeue(&queue);
		printf("꺼내진 정수 =%d\n", element);
		queue_print(&queue);
	}

	return 0;
}