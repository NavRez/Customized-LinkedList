#include "LinkedList.h"


LinkedList::LinkedList()
{
	firstNode = NULL;
	lastNode = NULL;
}


LinkedList::~LinkedList()
{
}

void LinkedList::add(int element = 0){

	Node* holdnode = new Node;
	
	holdnode->setNext(NULL);
	holdnode->setValue(element);

	if (firstNode != NULL)
	{
		lastNode = firstNode;
		while (lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}

		lastNode->next = holdnode;
		

	}
	else
	{
		firstNode = holdnode;

		
	}

	
}

int LinkedList::size(){

	linkedsize = 1;

	Node* temp = firstNode;

	if (firstNode == NULL){

		return 0;
	}

	while (temp->next != NULL)
	{
		linkedsize++;
		temp = temp->next;
	}
	


	return linkedsize;
}

void LinkedList::insert(int index, int element){

	Node *temp = firstNode;
	Node *newtemp = new Node(element,NULL);
	Node *hold;// hold is the initial index holder

	int count = 0;

	if (index == 0){
	
		newtemp->next = firstNode;
		firstNode = newtemp;


	}
	else{

		while (count != (index - 1)){

			temp = temp->next;
			count++;
		}

		hold = temp->next; // old 



		temp->next = newtemp;
		newtemp->next = hold;

	}
}

void LinkedList::remove(int index){
	
	Node *temp = firstNode;
	int count = 0;

	if (index == 0)
	{
		firstNode = firstNode->next;
	}
	else{

		while (count != (index - 1)){

			temp = temp->next;
			count++;

		}
	}
	if (temp->next == NULL){
	
		temp = NULL;
	}
	else{
		temp->next = (temp->next)->next;
	}
}

void LinkedList::clear(){

	firstNode = NULL;
	lastNode = NULL;

}

bool LinkedList::isEmpty() {

	if (firstNode == NULL)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool LinkedList::contains(int element){
	bool thing = 0;
	Node* ptr = firstNode;
	int val = ptr->getValue();

	if (val == element){
	
		return true;
	}
	
	
	
		while (ptr->next != NULL){
		
			
			ptr = ptr->next;
			val = ptr->getValue();

			if (val == element)
			{
				thing = true;
				return true;
			}
			else
			{
				thing = false;
				return false;
			}

		
	}

	
		if (thing == true)
		{
			return true;
		}
		else{
			return false;
		}
}

int LinkedList::get(int index){
	
	index = index + 1;

	Node *temp = firstNode;
	int count = 0;
	while (count != (index - 1)){

		temp = temp->next;
		count++;

	}

	int val = temp->getValue();


	return val;
}

void LinkedList::print() const{

	Node* node = firstNode;// points at the first not

	while (node != NULL){// if the node is not pointing at null
	
		cout << node->getValue() << endl;// couts the value 
		node = node->next;

	}

}



ostream& operator <<(ostream& os, const LinkedList& werd){

    werd.print();
	
	return os;

}

int LinkedList::operator[](int index){

	return get(index);

};

LinkedList LinkedList::operator+(const LinkedList &add){

	
	LinkedList *hold = new LinkedList;
	*hold = *this;
	
	Node* temper;
	temper = this->firstNode;

	while (temper->next != NULL){
	
		temper = temper->next;
	}

	temper->next = add.firstNode;
	

	return *this;

};

LinkedList LinkedList :: operator-(LinkedList & minus){
	int val;
	int val2;
	LinkedList *hold = new LinkedList;// make a temporary linkedlist and point it to operator new
	*hold = *this; //hold is now equal to the linkedlist that uses the operator -


	int list2size = minus.size();
	int list1size = this->size();

	int stop = 0;// no purpose, debug only

	Node * temper;// node pointer created
	temper = this->firstNode;// points to the firstnode of this 

	Node* nodeptr = minus.firstNode;// second node points to local pointer minus
	if (list2size < list1size){// applies only when list 1 is bigger than list 2
		while (nodeptr != NULL)// checks to see if the nodepointer is pointing at zero
		{
			val = nodeptr->getValue();// assigns the value of the current nodeptr for list2
			val2 = temper->getValue();// this is for list 1

			temper = this->firstNode;

			int count = 0;// reinitialize the counter to delete values




			while (temper->next != NULL){// checks to see if next is nulll

				if (temper->getValue() == val)// checks to see if 
				{
					remove(count);// removes value at point count





					temper = temper->next;// temper points to next node

					count++;// count increment 

					goto label;// goes to label and forces nodeptr to point to its next val

				}
				else{

					temper = temper->next;
					val2 = temper->getValue();
					count++;
				}


				if ((temper->next) == NULL && val == val2){// checks to see if the last value of list 1 is the same as list 2

					remove(count);// de;etes said point
					break;
				}


			}
		label:
			nodeptr = nodeptr->next;




		}
	}
	else
	{
		LinkedList got;// creates new list
	//	static int hold = 0;
		
		for (int z = 0; z < list1size; z++){// sets it equal to list 1
		
			got.add(this->get(z));
		}
		Node* pomting = got.firstNode;
		for (int i = 0; i < list2size; i++){
			pomting = got.firstNode;
			for (int j = 0; j < list1size; j++){
			
				if (minus.get(i) == this->get(j))// checks to see if they have similar values
				{
					
					pomting->setValue(1000000);
				}
				else{
				
				    ;

				}

				pomting = pomting->next;

			}
		}

		LinkedList newget;// creates a pointer

		for (int i = 0; i < got.size(); i++){
		
			if (got.get(i) != 1000000){
			
				newget.add(got.get(i));
			}
			else
			{
				;
			}

		}

		LinkedList *pointy = &newget;

		return *pointy;// returns it
	}


	if (val == val2 && this->firstNode->getValue() == minus.firstNode->getValue() && this->size() == 1 && minus.size() == 1){//unique exception for the class, triggered if and only if there is one member in each listd
	
		remove(0);
	}



	return *this;
}

bool LinkedList::operator!=(LinkedList& check){
	bool tru_fal = false;// creates a bool and assumes false
	LinkedList *hold = new LinkedList;// make a temporary linkedlist and point it to operator new
	*hold = *this;// hold is now equal to the linkedlist that uses the operator -=
	static int val_g = 0;// usesless int 
	Node * tmpe = this->firstNode;// temporary node points yo first node of the linked list
	Node * other = check.firstNode;// another temporary node points to the local class

	int hol1 = this->size();// useless values, used to check and debug certain problems
	int hol2 = check.size();


	if (this->size() != check.size()){// if both lists do not have the same size then they are not equal
	
		return tru_fal;// returns false
	}
	else
	{
		int count = 0;// counter int used to itearte through lists 
		while (tmpe != 0 && other != 0){// checks to see if the temp pointers point to zero


			if (hold->get(count) == check.get(count))//checks to see if the given value at count is equal on both pointers
			{
				tru_fal = true;// temporarily sets  bool to true
			}
			else// if anything fails than it is fals 
			{
				tru_fal = false;
				return tru_fal;

			}


			tmpe = tmpe->next;// moves to the next value
			other = other->next;// moves to the next value
			count++;
		}


	}
		return tru_fal;// returns final val of tru-fal
}
