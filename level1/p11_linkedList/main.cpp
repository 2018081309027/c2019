#include<stdio.h>
#include<stdlib.h>

struct linklist
{
	int data;
	struct linklist *next;
};

int main()
{
	linklist *node0 = (linklist*)malloc(sizeof(linklist)), *node1 = (linklist*)malloc(sizeof(linklist)), *node2 = (linklist*)malloc(sizeof(linklist)), *node3 = (linklist*)malloc(sizeof(linklist)), *node4 = (linklist*)malloc(sizeof(linklist));
	linklist *pn = node0;
	node0->next = node1;
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = NULL;
	//���½ڵ㸳ֵ��
	printf("��Ϊ����ڵ�����ֵ��\n");
	for (int i = 0; i < 5; i++)
	{
		scanf_s("%d", &pn->data);
		pn = pn->next;
	}
	//���½ڵ㷴���˹�����
	node4->next = node3;
	node3->next = node2;
	node2->next = node1;
	node1->next = node0;
	node0->next = NULL;
	printf("�ڵ��ѷ���\n���ڲ���ֵΪ5�Ľڵ���ţ�\n");
	//������������ֵ��
	pn = node4;
	for (int i = 1; i < 6; i++)
	{
		if (i == 6)
		{
			printf("-1\n");
			break;
		}
		if (pn->data == 5)
		{
			printf("�ýڵ����Ϊ��%d\n", i);
		}
		pn = pn->next;
	}
	system("pause");
}