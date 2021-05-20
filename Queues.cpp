// Queues.cpp

#include "Queues.h"

void Queues::create()
{
	front = rear = 0;
}

void Queues::destroy()
{
	front = rear = 0;
}

bool Queues::empty()
{
	return (front == rear);
}

bool Queues::full()
{
	return ((rear + 1) % QSIZE == front);
}

void Queues::insert(char item)
{
	data[rear++] = item;
	if(rear == QSIZE)
	   rear = 0;
}

void Queues::remove(char& item)
{
	item = data[front++];
	if(front == QSIZE)
		front = 0;

}
