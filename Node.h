/*
* Source.h
*
*  Created on: Feb 20, 2017
*      Author: N_REZ
*/

#ifndef NODE_H_
#define NODE_H_
#include <iostream>
using namespace std;

class Node
{
public:	

	friend class LinkedList;

	Node();
	
	Node(int, Node*); // Regular constructor 
	
	Node(Node&); // Copy constructor 
	
	~Node(); // Destructor 
	
	void setValue(int); // Changes value 
	
	int getValue()const; // Returns value 
	
	void setNext(Node*); // Changes next 
	
	Node* getNext(); // Returns next 

protected:
	int value;// data of the class

	Node* next;// points to the next class

};



#endif /* NODE_H_ */