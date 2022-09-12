/* #include <stdio.h>
#include <stdlib.h>
#include<string.h>


typedef struct {
	int id;  //현재시각
	int service_time; //서비스 시간
	int arrival_time; //도착시간
}element;

typedef struct NODE {   //노드
	struct NODE* link;
	element data;
} Node;

typedef struct QUEUE {  //큐
	Node* front;
	Node* rear;
	int size;
} Queue;

Queue* InitQueue(void) {  //큐 초기화
	Queue* queue = (Queue*)malloc(sizeof(Queue));
	queue->front = queue->rear = NULL;
	queue->size = 0;
	return queue;
}

void enqueue(Queue* queue, element item) {  //큐에 data 넣기
	Node* tmp = (Node*)malloc(sizeof(Node));

	tmp->data = item;
	tmp->link = NULL;

	if (queue->size == 0) {
		queue->front = tmp;
	}

	else {
		queue->rear->link = tmp;
	}
	queue->rear = tmp;
	queue->size++;
}

element dequeue(Queue* queue) {  //큐에서 데이터 빼기
	Node* cur;
	element tmp;
	cur = queue->front;
	int size = queue->size;
	puts("");

	if (cur == NULL) {
		//puts("큐가 빔.\n");
	}

	else {
		queue->size--;
		tmp = cur->data;
		queue->front = queue->front->link;
		//if (queue->front == NULL) queue->rear = NULL;

		free(cur);
		return tmp;
	}
	queue->front = cur;
}
 
void PrintQueue(Queue* queue) {  //큐의 모든 데이터 출력
	Node* tmp = (Node*)malloc(sizeof(Node));

	tmp = queue->front;
	int size = queue->size - 1;

	puts("\n큐 프린팅 시작");
	
	if (tmp == NULL) puts("프린팅할 데이터가 없습니다.");
	while (tmp != NULL) {
		printf("큐 (%d) = %d\n", queue->size - (size--), tmp->data);

		tmp = tmp->link;
	}
	

	puts("큐 프린팅 완료");
}  
int IsPrimeNumber(int n) //소수 판별 함수
{
	int i = 0;
	int last = n / 2;   //약수가 없는 수가 소수이므로 2부터 n/2(자기자신/2)까지만 확인하면 됨
	if (n <= 1)//소수는 1보다 큰 자연수여야 함
	{
		return 0;
	}
	//(자기자신/2)보다 큰수는 약수가 될 수 없음
	for (i = 2; i <= last; i++) //i를 2부터 last까지 1씩 증가시키며 반복 수행
	{
		if ((n % i) == 0) //n을 i로 나누었을때 나머지가 0이면(즉, i는 n의 약수가 아님)
		{
			return 0; //소수가 아니므로 0반환(i가 약수이므로 n은 소수가 아님)
		}
	}
	return 1; //1~last(자기자신/2)사이에 약수가 없으므로 소수임
} 

void delete_pos(Queue* queue, int pos) //pos번째의 노드 제거
{

	if (queue->size < pos) {
		puts("삭제하려는 노드가 list의 길이보다 큽니다.\n");
	}
	else {
		if (queue->size == 0) {
			puts("큐가 빔.\n");
		}

		else
		{
			
			Node* pre;  //삭제할 노드의 전노드
			Node* removed;  // 삭제할 노드
			pre = queue->front;
			if (pos == 1) {   //첫번째 노드 삭제
				//removed = pre;  //삭제할 노드 지정
				if (queue->size == 1)
				{
					
					queue->front = NULL;
					queue->rear = NULL;
					queue->size--;
										
				}
				else
				{	
					queue->front = queue->front->link; //앞 노드(헤드)와 전노드 연결 
					queue->size--;
				}
			}
			else {

				for (int i = 1; i <= (pos - 2); i++)  //두번째 이상 노드 삭제 2번째 노드 삭제면 넘어감
				{
					pre = pre->link;
				}
				removed = pre->link;  //삭제할 노드 지정
				pre->link = removed->link; ////앞 노드와 전노드 연결
				queue->size--;
		
				
			}
		}
	}
}
	
void delete_prime(Queue* queue, int pos) {  // data가 pos인 노드 삭제
	Node* p = queue->front;
	int n = 1;

	if (queue->size == 0)  //노드가 비었으면 종료
	{
		return;
	}
	while (1) {
		if (p != NULL)

		{
			if (p->data.id == pos) {   // p노드의 데이터가 pos이면
				delete_pos(queue, n);  // n번째 노드 삭제
			}
			
			if (n > queue->size) { return; } //리스트 길이보다 n이크면 함수 종료
			p = p->link; //   검사할 노드 증가
			n++;   // 검사할 노드 증가			}

		}
		else return;
		//} while (p != NULL); // p노드가 NULL이면 반복문 종료	

	}
}


void enqueue_first(Queue* queue, element item) {   //가장 앞 노드에 노드 생성, 데이터 저장
	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = item;
	tmp->link = NULL;
	if (queue->size == 0)
	{
		queue->front = tmp;
		queue->rear = tmp;
	}
	else{
	
	tmp->link = queue->front;
	queue->front = tmp;
	}
	queue->size++;
}


void main(void) {
	//enqueue(queue, 11);
	//PrintQueue(queue);
	//dequeue(queue);
	srand(time(NULL)); //난수 초기화

	Queue* atm1 = InitQueue(); //큐 초기화
	Queue* atm2 = InitQueue();
	Queue* atm3 = InitQueue();

	int minutes = 120; // 총시각  기다린시간= 시간-언제왔는지
	int total_wait = 0;  //총기다린시간  clock= clock+
	int total_customer = 0; //서비스를 받은 총 손님수

	int service_time_1 = 0;  //첫 서비스시간을 0으로 초기화
	int service_time_2 = 0;
	int service_time_3 = 0;

	int service_customer_1;  //서비스를 받은 손님
	int service_customer_2;
	int service_customer_3;



	for (int clock = 0; clock < 120; clock++)
	{
		int minute10 = -1; // 10분마다 1로 바뀌는 변수
		int vip;	 //vip 선언;
		vip = rand() % 10 + 1;   //10%의 확률 지정
		element customer;
		int hour = 9;  //9시
		if (clock >= 60)  //분이 60이 되면 10시로 바뀜
		{
			hour = 10; 
		}
		customer.arrival_time = clock;       //도착시간- clock
		customer.id = clock % 60;   //번호 지정
		customer.service_time = rand() % 9 + 2;  //서비스시간 지정




		if (clock % 10 == 0 && clock >= 10) minute10 = 1;   //10분마다 minute10이 1로 됌

		if (minute10 == 1) { //10분마다
			for (int i = 1; i < 60; i++)  //소수이면 그 노드 뺌
			{

				if (IsPrimeNumber(i) == 1)  //i가 소수이면
				{
					delete_prime(atm1, i);   // atm 노드에서 데이터 값이 i인 노드 뺌
					delete_prime(atm2, i);    
					delete_prime(atm3, i);    

				}
			}
		}



		if (atm1->size < atm2->size && atm1->size < atm3->size)   // atm1 길이가 가장 작으면
		{
			if (vip == 1)   //vip 이면
				enqueue_first(atm1, customer); //가장 먼저 노드에 집어넣음
			else {
				enqueue(atm1, customer);  //vip가 아니면 enqueue

				if (service_time_1 <= 0) // atm1이 빔  
				{
					if (!atm1->size == 0)    //atm이 비어있으면
					{
						element customer = dequeue(atm1);  // 손님 atm에 넣음
						total_customer++;  //총 서비스 받은 사람 더함
						total_wait = total_wait + clock - customer.arrival_time;//총 기다린시간 더함
						printf("%d시 %d분 - %d번 고객(%d분 소요)이 1번 ATM에서 서비스를 시작함\n",
							hour, clock % 60, customer.id, customer.service_time);

						service_time_1 = customer.service_time;  //서비스 시간 배정
					}
				}
				else if (service_time_1 > 0) //아직 누군가가 업무중임
				{
					service_time_1--;  //서비스 시간 1감소
					service_time_2--;
					service_time_3--;
				}
			}
		}
		else if (atm2->size < atm1->size && atm2->size < atm3->size)
		{
			if (vip == 1)
				enqueue_first(atm2, customer);
			else {
				enqueue(atm2, customer);

				if (service_time_2 <= 0) // atm2이 빔
				{
					if (!atm2->size == 0)
					{
						element customer = dequeue(atm2);
						total_customer++;
						total_wait = total_wait + clock - customer.arrival_time;//기다린시간
						printf("%d시 %d분 - %d번 고객(%d분 소요)이 2번 ATM에서 서비스를 시작함\n",
							hour, clock % 60, customer.id, customer.service_time);  

						service_time_2 = customer.service_time;   
					}
				}
				else if (service_time_2 > 0) //아직 누군가가 업무중임
				{
					service_time_1--;
					service_time_2--;
					service_time_3--;
				}
			}
		}
		else if (atm3->size < atm1->size && atm3->size < atm2->size)
		{
			if (vip == 1)
				enqueue_first(atm3, customer);
			else {
				enqueue(atm3, customer);

				if (service_time_3 <= 0) // atm3이 빔
				{
					if (!atm3->size == 0)
					{
						element customer = dequeue(atm3);
						total_customer++;
						total_wait = total_wait + clock - customer.arrival_time;//기다린시간
						printf("%d시 %d분 - %d번 고객(%d분 소요)이 3번 ATM에서 서비스를 시작함\n",
							hour, clock % 60, customer.id, customer.service_time);

						service_time_3 = customer.service_time;
					}
				}
				else if (service_time_3 > 0) //아직 누군가가 업무중임
				{
					service_time_1--;
					service_time_2--;
					service_time_3--;
				}
			}
		}

		else //ATM 줄이 동일한 길이가 있을때
		{
			int a = rand() % 3 + 1;  //랜덤
			if (a == 1) {
				if (vip == 1)
					enqueue_first(atm1, customer);
				else {
					enqueue(atm1, customer);

					if (service_time_1 <= 0) // atm1이 빔
					{
						if (!atm1->size == 0)
						{
							element customer = dequeue(atm1);
							total_customer++;
							total_wait = total_wait + clock - customer.arrival_time;//기다린시간
							printf("%d시 %d분 - %d번 고객(%d분 소요)이 1번 ATM에서 서비스를 시작함\n",
								hour, clock % 60, customer.id, customer.service_time);

							service_time_1 = customer.service_time;
						}
					}
					else if (service_time_1 > 0) //아직 누군가가 업무중임
					{
						service_time_1--;
						service_time_2--;
						service_time_3--;
					}
				}
			}
			else if (a == 2) {
				if (vip == 1)
					enqueue_first(atm2, customer);
				else {
					enqueue(atm2, customer);

					if (service_time_2 <= 0) // atm2이 빔
					{
						if (!atm2->size == 0)
						{
							element customer = dequeue(atm2);
							total_customer++;
							total_wait = total_wait + clock - customer.arrival_time;//기다린시간
							printf("%d시 %d분 - %d번 고객(%d분 소요)이 2번 ATM에서 서비스를 시작함\n",
								hour, clock % 60, customer.id, customer.service_time);

							service_time_2 = customer.service_time;
						}
					}
					else if (service_time_2 > 0) //아직 누군가가 업무중임
					{
						service_time_1--;
						service_time_2--;
						service_time_3--;
					}
				}
			}
			else if (a == 3) {

				if (vip == 1)
					enqueue_first(atm3, customer);
				else {
					enqueue(atm3, customer);

					if (service_time_3 <= 0) // atm3이 빔
					{
						if (!atm3->size == 0)
						{
							element customer = dequeue(atm3);
							total_customer++;
							total_wait = total_wait + clock - customer.arrival_time; //기다린시간
							printf("%d시 %d분 - %d번 고객(%d분 소요)이 3번 ATM에서 서비스를 시작함\n",
								hour, clock % 60, customer.id, customer.service_time);

							service_time_3 = customer.service_time;
						}
					}
					else if (service_time_3 > 0) //아직 누군가가 업무중임
					{
						service_time_1--;
						service_time_2--;
						service_time_3--;
					}
				}
			}
		}
	} printf("\n\n");
	printf("서비스를 받은 총 손님수 : %d명\n", total_customer);
	printf("평균 1명이 기다린 시간 : %d분\n", total_wait / total_customer);
	printf("10시 59분 현재 대기자 수 : %d명\n", atm1->size + atm2->size + atm3->size);

}

*/