#include "Node.h"

Node::Node(){

	value = 0;
	next = nullptr;
}


Node::Node(int data, Node* point)
{
	value = data;// sets the int
	next = point;// sets the pointer
}


Node::Node(Node& copy){// sets data members for copy constructor

	value = copy.value;
	next = copy.next;

};


Node::~Node()
{
	// destructs the class
}


void Node::setValue(int input){

	value = input;// reinitializes value to the input 

}; 


int Node::getValue()const{

	return value;// returns the value 

}; 


void Node::setNext(Node* built){

	next = built;// sets next to the next node

}; 


Node* Node::getNext(){
  
	return next;// returns the next pointer node
}; 