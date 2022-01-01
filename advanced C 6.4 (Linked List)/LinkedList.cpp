#include "List.h"



typedef int ListDataType;
typedef struct Node_t
{
	Node* next;
	ListDataType val;
}Node;



List* List::CreateList()
{
	List* L;

	return L;
}

void List::FreeList(List* list)
{
	while (list->head->next != nullptr)
	{
		Node *temp = list->head;
		list = list->head->next;
		free(temp);
	}
}

size_t List::GetListSize(List* list)
{
	size_t len = 0;
	Node *temp = list->head;
	while (temp->next != nullptr)
	{
		len++;
		temp = temp->next;
	}
	return len;
}

List::Node* List::GetListHead(List* list)
{
	return list->head;
}

List::Node* List::GetNextNode(Node* currentnode)
{
	return currentnode->next;
}

ListDataType List::GetValue(Node* node)
{
	return node->val;
}

List::Node* List::Insert(Node* after, ListDataType newValue)
{
	Node* temp = after->next;
	Node *new_node;
	new_node->val = newValue;
	new_node->next = temp;
	after->next = new_node;
	free(new_node);
	free(temp);
}

List::Node* List::PushFront(List* list, ListDataType newValue)
{
	Node* new_node;
	new_node->val = newValue;
	new_node->next = list-> head;
	list->head = new_node;
	free(new_node);
	return nullptr;
}

List::Node* List::PushBack(List* list, ListDataType newValue)
{
	List* temp = list;
	Node* new_node;
	new_node->val = newValue;
	while (temp->head->next != nullptr)
	{
		temp->head = temp->head->next;
	}
	temp->head->next = new_node;
	free(temp);
	free(new_node);
	return nullptr;
}

ListDataType List::PopFront(List* list)
{
	ListDataType value = list->head->val;
	Node* temp = list->head;
	list->head = list->head->next;
	free(temp);
	return value;
}

ListDataType List::PopBack(List* list)
{
	List* temp = list;
	while (temp->head->next != nullptr)
	{
		temp->head = temp->head->next;
	}
	ListDataType L = temp->head->val;
	free(temp);
	return L;
}

void List::DeleteListNode(List* list, Node* target)
{
	List* temp = list;
	while (temp->head->next != target)
	{
		temp->head = temp->head->next;
	}
	Node *Delete = temp->head->next;
	temp->head->next = Delete->next;
	free(Delete);
	return;
}

List::Node* List::DeleteListValue(List* list, ListDataType value)
{
	List* temp = list;
	while (temp->head->next->val != value)
	{
		temp->head = temp->head->next;
	}
	Node* Delete = temp->head->next;
	temp->head->next = Delete->next;
	free(Delete);
	return;
}

List::Node* List::FindInList(List* list, ListDataType value)
{
	Node* found;
	List* temp = list;
	while (temp->head->val != value)
	{
		temp->head = temp->head->next;
	}
	found = temp->head;
	free(temp);
	return found;
}
