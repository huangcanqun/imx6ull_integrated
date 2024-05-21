#include "main.h"
int main()
{
	cout << "----------------------------------------helloworld----------------------------------------" << endl;
	ListNode* list = CreateListNode();
	list->val = 88;
	list->Next = NULL;
	list = AddList(list, 99);
	DisplayList(list);

	return 0;
}