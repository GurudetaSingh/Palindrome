// Queues.h

#ifndef QUEUES_H_
#define QUEUES_H_

class Queues
{
	public:
		static const int QSIZE = 50;
		typedef char QDATA[QSIZE];

		void create();
		void destroy();
		bool empty();
		bool full();
		void insert(char);
		void remove(char&);

	private:
		QDATA data;
		int front;
		int rear;
};

#endif /* QUEUES_H_ */
