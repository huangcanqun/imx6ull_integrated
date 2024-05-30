#include "main.h"
int main()
{
	cout << "----------------------------------------helloworld----------------------------------------" << endl;
	ListNode* head = CreateList();
	head = AddList(head, 99);
	head = AddList(head, 88);
	head = AddList(head, 77);



	DisplayList(head);

	return 0;
}