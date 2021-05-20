// Stacks.h

#ifndef STACKS_H_
#define STACKS_H_

class Stacks
{
	public:
		static const int SSIZE = 50;
		typedef char SDATA[SSIZE];

		void create();
		void destroy();
		bool empty();
		bool full();
		void push(char);
		void pop(char&);

	private:
		SDATA data;
		int top;

};


#endif /* STACKS_H_ */
