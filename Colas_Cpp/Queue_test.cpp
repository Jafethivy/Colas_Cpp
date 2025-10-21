#include "Queue_test.h"
#include "Trabajo.h"
#include <stdexcept>

void Queue_test::push(Trabajo t) {
	NodeQueue* newNode = new NodeQueue(t);
	if (frontNode == nullptr) {
		frontNode = newNode;
	} else {
		NodeQueue* temp = frontNode;
		while (temp->next != nullptr) {
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void Queue_test::pop() {
	if (frontNode != nullptr) {
		NodeQueue* temp = frontNode;
		frontNode = frontNode->next;
		delete temp;
	}
}

Trabajo Queue_test::front() {
	if (frontNode != nullptr) {
		return frontNode->data;
	} else {
		throw std::runtime_error("Queue is empty");
	}
}
