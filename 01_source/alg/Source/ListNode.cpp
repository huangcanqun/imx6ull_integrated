#include "ListNode.h"

void DisplayList(ListNode* head)
{
	cout << "-" << head->val;
	while (head->Next != NULL)
	{
		head = head->Next;
		cout << "-" << head->val;
	}
}

ListNode* CreateListNode(void)
{
	ListNode* listRes = NULL;
	listRes = (ListNode*)malloc(sizeof(listRes));

	return listRes;
}

ListNode* AddList(ListNode* head , int val)
{
	ListNode* listNextNode = CreateListNode();
	listNextNode->val = val;
	listNextNode->Next = NULL;
	head->Next = listNextNode;

	return head;
}