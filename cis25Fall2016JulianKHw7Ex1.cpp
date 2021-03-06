#include "Menu.h"
#include <iostream>
using namespace std;

struct IntNode {
	int data;
	struct IntNode* next;
};

class IntList {
public:
	IntList() : head(nullptr){
	}

	void insertFirst(int value) {
		IntNode* tmpPtr = head;
		head = new IntNode();

		head->data = value;
		head->next = tmpPtr;

	}

	IntNode* removeFirst() {
		IntNode* tmpPtr = head;

		if (head != nullptr)
			head = head->next;

		return tmpPtr;
	}

	int getValueAt(int nodeNumber) {
		IntNode* tmpPtr = head;

		for (int i = 1; i < nodeNumber; i++) {
			tmpPtr = tmpPtr->next;
		}
		return tmpPtr->data;
	}
private:
//	IntNode node;
	IntNode* head;
};


int main() {
	
	IntList* ilptr = nullptr;

	ilptr = new IntList();
	ilptr->insertFirst(12);

	ilptr = ilptr->removeFirst();




	
	/*cout << "CIS 25 - C++ Programming"
		<< "\nLaney College"
		<< "\nJulian K"
		<< "\nAssignment Information --"
		<< "\n  Assignment Number : Homework 07,"
		<< "\n                      Exercise #1"
		<< "\n  Written by        : Julian K"
		<< "\n  Due Date          : 2016/12/1\n";
	menuHw7Ex1();*/
	return 0; 
}


#include <iostream>
using namespace std;


template <typename T>
struct NodeT {
	T data;
	struct NodeT<T>* next;
};

template <typename T>
class ListT {
public:
	ListT() head : (nullptr){
	}

	void insertFirst(T value){
		NodeT<T>* tmpPtr = head;
		head = new NodeT<T>;
		
		head->data = value;
		head->next = tmpPtr;
	}

	void removeFirst() {
		NodeT<T>* tmpPtr = head;

		if (head != nullptr)
			head = head->next;
		return tmpPtr;
	}

	T getValueAt(T nodeNumber) {
		IntNode* tmpPtr = head;

		for (int i = 1; i < nodeNumber; i++) {
			tmpPtr = tmpPtr->next;
		}
		return tmpPtr->data;
	}


private:
	NodeT<T>* head;
};

struct IntNode {
	int data;
	struct IntNode* next;
};



int main() {

	const int i;

