// Stacks.cpp

#include "Stacks.h"

void Stacks::create()
{
	top = 0;
}

void Stacks::destroy()
{
	top = 0;
}

bool Stacks::empty()
{
	return top == 0;
}

bool Stacks::full()
{
	return top >= SSIZE;
}

void Stacks::push(char item)
{
	data[top++] = item;
}

void Stacks::pop(char& item)
{
	item = data[--top];
}

