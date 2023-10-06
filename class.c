#include <stdio.h>
#include <stdlib.h> // abs 함수를 사용하기 위함

// 좌표를 나타내는 구조체 정의
typedef struct point {
    int x, y; // x와 y 좌표를 가짐
} POINT;

// 함수 원형 선언
void inputPoint(POINT *p); // 좌표 입력 함수
void outputPoint(POINT *p); // 좌표 출력 함수
void distance(POINT *p, POINT *q); // 원점에서 가장 가까운 좌표 찾는 함수

int main() {
    POINT p[5]; // POINT 구조체 배열 정의
    POINT origin = {999999, 999999}; // 최댓값 찾기 위해 초기값 설정

    inputPoint(p); // 사용자로부터 좌표를 입력받음
    distance(p, &origin); // 원점과 가장 가까운 좌표 찾음
   printf("원점에서 가장 가까운 좌표 : ");
    outputPoint(&origin); // 가장 가까운 좌표를 출력

   return 0;
}

// 사용자로부터 좌표를 입력받는 함수
void inputPoint(POINT *p) {
   for (int i = 0; i < 5; ++i) {
      scanf("%d %d", &p[i].x, &p[i].y);
   }
}

// 좌표를 출력하는 함수
void outputPoint(POINT *p) {
   printf("(%4d,%5d)", p->x, p->y);
}

// 원점에서 가장 가까운 좌표를 찾는 함수
void distance(POINT *p, POINT *q) {
   for (int i = 0; i < 5; ++i) {
        int now = abs(p[i].x + p[i].y); // 현재 좌표의 절대값 합 구하기
        int qsum = abs(q->x + q->y); // 현재까지 가장 가까운 좌표의 절대값 합 구하기

      if (now < qsum) {
            // 현재 좌표가 현재까지 가장 가까운 좌표보다 가까울 때 업데이트
            q->x = p[i].x;
            q->y = p[i].y;
      } else if (now == qsum && (p[i].x + p[i].y) < (q->x + q->y)) {
            // 절대값 합이 같을 때, 좌표의 합을 비교하여서 더 작은 값 변경
            q->x = p[i].x;
            q->y = p[i].y;
      }
   }
}
