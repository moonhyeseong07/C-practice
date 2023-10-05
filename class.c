#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_STACK_SIZE 100

typedef int element; // int를 element로 재정의

typedef struct {
    int top;            // 스택의 현재 위치를 나타내는 변수
    element data[MAX_STACK_SIZE]; // 스택 데이터를 저장하는 배열
} Stack;

// 전역변수로 스택 구조체 선언
Stack s;

// 스택 초기화 함수
void initStack() {
    s.top = -1; // 스택을 초기화하고 top을 -1로 설정
}

// 스택이 비어있는지 확인하는 함수
bool isEmpty() {
   if (s.top == -1)
        return true; // top이 -1이면 스택이 비어있음
   return false;
}

// 스택이 꽉 차 있는지 확인하는 함수
bool isFull() {
   if (s.top == MAX_STACK_SIZE - 1)
        return true; // top이 배열의 최대 크기와 같으면 스택이 꽉 차있음
   return false;
}

// 스택에 원소를 추가하는 함수
void push(element item) {
   if (isFull()) {
      printf("스택이 꽉 차있습니다. \n");
      return;
   }
    s.data[++s.top] = item; // top을 증가시키고 해당 위치에 원소 추가
}

// 스택에서 원소를 제거하고 반환하는 함수
element pop() {
   if (isEmpty()) {
      printf("스택이 비었습니다. \n");
      return 0;
   }
    return s.data[s.top--]; // top 위치의 원소를 반환하고 top을 감소시킴
}

// 스택의 맨 위에 있는 원소를 반환하는 함수
element peek() {
   if (isEmpty()) {
      printf("스택이 비었습니다. \n");
      return 0;
   }
    return s.data[s.top]; // top 위치의 원소를 반환하지만 top은 변경하지 않음
}

int main() {
    initStack(); // 스택 초기화
    push(1);     // 1을 스택에 추가
    push(2);     // 2를 스택에 추가
    push(3);     // 3을 스택에 추가
    printf("%d\n", pop());  // 스택에서 원소를 제거하고 출력
    printf("%d\n", peek()); // 스택의 맨 위 원소를 출력
    printf("%d\n", pop());  // 스택에서 원소를 제거하고 출력
   return 0;
}
