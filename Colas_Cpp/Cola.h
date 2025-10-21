#pragma once
#include "Trabajo.h"

__interface Queue {
	void push(Trabajo t);
	void pop();
	Trabajo front();

	bool empty();
};