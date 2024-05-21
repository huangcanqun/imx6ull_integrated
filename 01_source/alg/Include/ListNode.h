#pragma once
#include <iostream>
using namespace std;

struct ListNode
{
	int val;
	struct ListNode* Next;
};

void DisplayList(ListNode* head);
ListNode* CreateListNode(void);
ListNode* AddList(ListNode* head, int val);
