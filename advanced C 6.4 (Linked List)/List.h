#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma once
class List
{

	typedef int ListDataType;
	typedef struct Node_t 
	{
		Node* next;
		ListDataType val;
	}Node;

	Node* head;



	List* CreateList();
	void FreeList(List* list);
	size_t GetListSize(List* list);
	Node* GetListHead(List* list);
	Node* GetNextNode(Node* currentnode);
	ListDataType GetValue(Node* node);
	Node* Insert(Node* after, ListDataType newValue);
	Node* PushFront(List* list, ListDataType newValue);
	Node* PushBack(List* list, ListDataType newValue);
	ListDataType PopFront(List* list);
	ListDataType PopBack(List* list);
	void DeleteListNode(List* list, Node* target);
	Node* DeleteListValue(List* list, ListDataType value);
	Node* FindInList(List* list, ListDataType value);

};

