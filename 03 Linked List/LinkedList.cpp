#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertToHead(int input){
	
	Node *newNode  = new Node();
	newNode->value = input;
	newNode->next  = head;
	head		   = newNode;
	cout<<input<<" Berhasil dimasukkan pada Head\n";
	
	if (tail == NULL)
	{
		tail = head;
	}
} 

void LinkedList::insertToTail(int input){
	
	if (head == NULL)
	{
		cout<<"Linkedlist Masih Kosong\n";
		return;
	}
	else
	{
		Node *newNode	= new Node();
		newNode->value	= input;
		tail->next		= newNode;
		tail			= newNode;
		cout<<input<<" Berhasil dimasukkan pada Tail\n";	
	}
}

void LinkedList::insertAfter(int target, int input){
	
	if (head == NULL)
	{
		cout<<"Linkedlist Masih Kosong\n";
		return;
	}
	else 
	{
		Node *newNode  = new Node();
		newNode->value = input;
		Node* tmp = head;
	
		while(tmp->value != target)
		{
			tmp = tmp->next;
		}
		newNode->next = tmp->next;
		tmp->next = newNode;
		cout<<input<<" Berhasil dimasukkan setelah "<<target<<endl;
	}
}

void LinkedList::deleteFromHead(){
	
	if (head == NULL)
	{
		cout<<"Linkedlist Masih Kosong\n";
		return;
	}
	else
	{
		Node* tmp = head;
		head = tmp->next;
		cout<<tmp->value<<" Berhasil dihapus\n";
		delete tmp;
	}
}

void LinkedList::deleteFromTail(){
	
	if (head == NULL)
	{
		cout<<"Linkedlist Masih Kosong\n";
		return;
	}
	else
	{
		Node* tmp = head;
		Node* tmpDel = tail;
		while(tmp->next->next != NULL)
		{
			tmp = tmp->next;
		}
		cout<<tmp->next->value<<" Berhasil dihapus\n";
		delete tmp->next;
		tmp->next = NULL;
	}
}



void LinkedList::deleteByValue(int input){
	
	Node* tmp = head;
	Node* prev;
	
	if(input == head->value)
	{
        head = head->next;
        delete tmp;
        cout<<input<<" Berhasil dihapus\n";
        return;
	}
	else
	{
		while (tmp->value != input) 
		{
	        prev = tmp;
	        tmp = tmp->next;
	    }
	    prev->next = tmp->next;
		delete tmp;
		cout<<input<<" Berhasil dihapus\n";
	}
}

void LinkedList::printAll(){
	
	Node *tmp = head;
	while (tmp != NULL)
	{
		cout<<tmp->value<< "->";
		tmp = tmp->next;
	}
	cout<<endl;
}