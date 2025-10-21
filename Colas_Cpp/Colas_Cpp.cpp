#include <iostream>
#include "Queue_test.h"
#include "Cola.h"
#include "Trabajo.h"

int main() {
	Queue_test queue;
	Trabajo t1("Document1", "AuthorA");
	Trabajo t2("Document2", "AuthorB");
	Trabajo t3("Document3", "AuthorC");
	queue.push(t1);
	queue.push(t2);
	queue.push(t3);
	while (!queue.empty()) {
		Trabajo current = queue.front();
		std::cout << "Printing: " << current.getTitle() << " by " << current.getAuthor() << std::endl;
		current.setPrinted(true);
		queue.pop();
	}
	return 0;
}