#pragma once
#include "Trabajo.h"
#include "Cola.h"

class Queue_test : public Queue{
private:
	class NodeQueue {
		public:
		Trabajo data;
		NodeQueue* next;
		NodeQueue(Trabajo d) : data(d), next(nullptr) {}
	};
	NodeQueue* frontNode;

public:
	void push(Trabajo t);
	void pop();
	Trabajo front();
	bool empty() { return frontNode == nullptr; };

};

