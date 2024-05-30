#pragma once
#include <iostream>
#include "stdlib.h"
using namespace std;

struct DataType
{
	int val;
};

struct ListNode
{
	struct DataType Data;
	struct ListNode* Next;
};

void DisplayList(ListNode* head);
ListNode* CreateList(void);
void DestroyList(ListNode* head);
ListNode* ClearList(ListNode* head);

ListNode* AddList(ListNode* head, int val);
ListNode* DeleteList(ListNode* head, int rack);
ListNode* TraverseList(ListNode* head);

