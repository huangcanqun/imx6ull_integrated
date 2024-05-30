#include "ListNode.h"

void DisplayList(ListNode* head)
{
	while (head->Next != NULL)
	{
		head = head->Next;
		cout << "-" << head->Data.val;
	}
}



ListNode* CreateList(void)
{
	ListNode* listRes = NULL;
	listRes = (ListNode*)malloc(sizeof(struct ListNode));
	listRes->Next = NULL;
	return listRes;
}

ListNode* AddList(ListNode* head , int val)
{
	ListNode* listRackPt = head;
	ListNode* listNextNode = CreateList();
	listNextNode->Data.val = val;
	listNextNode->Next = NULL;

	while (listRackPt->Next != NULL)
	{
		listRackPt = listRackPt->Next;
	}
	listRackPt->Next = listNextNode;

	return head;
}