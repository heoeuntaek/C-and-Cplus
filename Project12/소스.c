#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef struct element {
	int id;  //����ð�
	int service_time; //���� �ð�
	int arrival_time; //�����ð�
}element;

typedef struct{
	element data[MAX_QUEUE_SIZE];  //����ð�
	int front;
	int rear; //�����ð�
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
		error("��ȭ����");
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
		error("�������");
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
		printf("���� �Է�:");
		scanf("%d", &element);
		enqueue(&queue, element);
		queue_print(&queue);
	}
	printf("����\n");

	printf("%d",dequeue(&queue));
}
*/

void main() {
	QueueType queue;
	init_quque(&queue);
	int minutes = 60; // �ѽð�
	int total_wait = 0;  //�ѱ�ٸ��ð�
	int total_customer = 0; //�� �մԼ�
	int service_time = 0;  //���񽺽ð�
	int service_customer;

	srand(time(NULL));
	for (int clock = 0; clock < minutes; clock++)
	{
		printf("����ð� = %d\n", clock);
		if (3 > rand() % 10)
		{
			element customer;
			customer.id = ++total_customer;
			customer.arrival_time = clock;// �����ð� ����
			customer.service_time = (rand() % 3) + 1; //���� �ð�
			enqueue(&queue, customer);
			printf("�� %d�� %d�п� ���ɴϴ�. ����ó���ð� = %d��\n", customer.id, customer.arrival_time, customer.service_time);
		}

		if (service_time > 0)
		{
			printf("��%d�� �������Դϴ�.\n", service_customer);
			service_time--;

		}

		else {
			if (!is_empty(&queue))
			{
				element customer = dequeue(&queue);
				service_customer = customer.id;
				service_time = customer.service_time;
				printf("�� %d�� %d�п� ������ �����մϴ�.\n", customer.id, clock);
				printf("���ð��� %d���̾����ϴ�.\n", clock - customer.arrival_time);
				total_wait = total_wait + clock - customer.arrival_time;
			}
		}
	}printf("��ü ���ð�=%d", total_wait);
	queue.data.
}