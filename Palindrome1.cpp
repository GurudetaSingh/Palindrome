/* name: Gurudeta Singh
 * project: Palindromes
 * class: CS 2500
 * Description: This will print out a phrase that is the same forwards as backwards.
 */

#include <iostream>
#include <string>
#include "Stacks.h"
#include "Queues.h"
using namespace std;

void isPalindrome();

int main()
{
	isPalindrome();
	return 0;
}

void isPalindrome()
{
	string palindrome;
	char charS, charQ;
	unsigned int n = 0;
	bool valid = true;

	Stacks stack;
	Queues queue;

	stack.create();
	queue.create();

	cout << "Enter a string to determine whether or not it is a palindrome: ";
	getline(cin, palindrome);
	cout << "You entered: " << palindrome << endl;

	// This loop pushes and inserts the string into the stack and the queue
	while(!stack.full() && !queue.full() && n < palindrome.length())
	{
		stack.push(palindrome[n]);
		queue.insert(palindrome[n]);
		n++;
	}

	// This loop pops and removes each character from the stack and
	// Queue to check if they are equal
	while(!stack.empty() && !queue.empty())
	{
		stack.pop(charS);
		queue.remove(charQ);
		if(charS != charQ)
			valid = false;
	}

	// This will print out whether or not this string is a palindrome
	if(valid)
		cout << palindrome << " is a palindrome." << endl;
	else
		cout << palindrome << " is not a palindrome." << endl;

	stack.destroy();
	queue.destroy();
}





