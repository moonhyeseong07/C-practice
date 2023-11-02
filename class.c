// 함수를 활용해 node 동적으로 생성하기
#include <stdio.h>
#include <stdlib.h>
typedef int element;
typedef struct Node
{
	element data;
	struct Node *next;
} Node;
Node *createNode(element data);
void printAll(Node *ptr);

int main()
{
	Node *head, *node1, *node2;
	// head, node1, node2 노드 생성
	head = createNode(12);
	node1 = createNode(99);
	node2 = createNode(37);
	head->next = node1;
	node1->next = node2; // 각 노드->next를 저장
	printAll(head);
}
Node *createNode(element data)
{
	Node *node = (Node *)malloc(sizeof(Node)); // 노드 크기 동적 할당
	node->data = data;
	node->next = NULL; // 노드->next 참조를 NULL저장
	return node;
}
void printAll(Node *ptr)
{
	while (ptr)
	{
		if (ptr->next)
		{							   // next 노드가 있으면 ->출력
			printf("%d->", ptr->data); // 노드의 데이터 출력
			ptr = ptr->next;		   // 다음노드의 주소로 저장
		}
		else
		{
			printf("%d", ptr->data); // 노드의 데이터 출력
			return;					 // 프린트 종료
		}
	}
}