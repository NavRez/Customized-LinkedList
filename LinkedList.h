
#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Collection.h"


class LinkedList:public Collection
{
public:
	LinkedList();
	~LinkedList();
	virtual void add(int value);
	virtual int size();
	virtual void insert(int index, int element);
	virtual void remove(int index);
	virtual void clear();
	virtual bool isEmpty();
	virtual bool contains(int element);
	virtual int get(int index);
	virtual void print() const;// prints the given list
	
	friend ostream & operator << (ostream&, const LinkedList&);// couts the list of the linked list
	int operator[](int);// outputs a particular member of the linked list
	LinkedList operator+(const LinkedList &);// adds two linked lists
	LinkedList operator-(LinkedList &);// subtratcs two linked lists
	bool operator!=(LinkedList &);// checks to see if one list is exactly equal to another
	


private:
	
	Node* firstNode;
	Node* lastNode;

};

#endif /* LINKEDLIST_H_ */