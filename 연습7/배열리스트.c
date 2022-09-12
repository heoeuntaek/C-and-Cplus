#include <stdio.h>
#pragma warning(disable : 4996)
#define SIZE 100

//// 타입정의 -> int형을 element로 정의 ////
//// 타입 변경할 때 편하게 하기위해 ////
typedef int element;

typedef struct {
    element list[SIZE];            //배열
    int length;                    //현재 배열에 저장된 데이터 개수
}ArrayListType;

//// 배열 초기화
void init(ArrayListType* L)
{
    L->length = 0;
}
////배열이 비어있는지 확인할 함수
////비어있으면 1, 그렇지 않으면 0 반환
int is_empty(ArrayListType* L)
{
    return L->length == 0;
}
//리스트가 가득 차있으면 1, 그렇지 않으면 0 반환
int is_full(ArrayListType* L)
{
    return L->length == SIZE;
}
//리스트 데이터 출력
void display(ArrayListType* L)
{
    for (int i = 0; i < L->length; i++)
        printf("%d ", L->list[i]);
    printf("\n");
}


