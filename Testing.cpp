#include "LinkedList.h"


void reset(LinkedList&, LinkedList&);

int main(){

	LinkedList list, let, twee, gree;
	
	LinkedList L1, L2, L3, Lc1, Lc2;

	int n = 1;
	while (n != 0){
	
			
	cout << "--------------------------------------\n";
	cout << "######## Choose your option : ##########\n";
	cout << "1. Initialize linked Lists\n";
	cout << "2. add an element in the beginning of a list\n";
	cout << "3. add an element anywhere in the list\n";
	cout << "4. remove an element from list\n";
	cout << "5. remove an entire list\n";
	cout << "6. Check to see if list is empty\n";
	cout << "7. Check to see if list has particular element\n";
	cout << "8. Access particular element of a list from index\n";
	cout << "9. Print list \n";
	cout << "-----OVERLOADING OPERATORS-----\n";
	cout << "10. Adding two lists\n";
	cout << "11. Subtracting the two lists\n";
	cout << "12. Verify if the two lists are equal to one another\n";
	cout << "13. Access a particular element through its index\n";
	cout << "14. Output the two lists and list 3\n";
	cout << "-------------------------------------\n";
	cout << " 0. Exit\n";
	cout << "-------------------------------------\n\n";

	cin >> n;
	cout << endl << endl;
	switch (n)
	{
	case 1:
		int s;
		cout << "What is the size of your list 1 ?\n";
		cin >> s;

		if (s == 0){ ; }
		else{

			for (int i = 0; i < s; i++){
				int element;
				cout << "Enter the input for index " << i << " :";
				cin >> element;
				L1.add(element);
				cout << endl;


			}

			reset(Lc1, L1);
		}

		cout << "What is the size of your list 2 ?\n";
		cin >> s;
		
		if (s == 0){ ; }
		else{
			for (int i = 0; i < s; i++){
				int element;
				cout << "Enter the input for index " << i << " :";
				cin >> element;
				L2.add(element);
				cout << endl;


			}

			reset(Lc2, L2);
		}
		cout << endl;
		break;

	case 2:

		int check;
		cout << "Enter 1 to add to List 1 or Enter 2 to enter an element to list 2\n";
		cin >> check;

		while (check != 1 && check != 2){

			cout << "Error not a valid entry, try again :";
			cin >> check;
		}

		if (check == 1){

			if (L1.isEmpty()){

				cout << "Error, there are no elements in the list, add elements first \n";
			}
			else{
				int elem;
				cout << "Enter the element you wish\n";
				cin >> elem;
				L1.add(elem);
				Lc1.add(elem);
			}

		}
		else
		{
			if (L1.isEmpty()){

				cout << "Error, there are no elements in the list, add elements first \n";
			}
			else{
				int elem;
				cout << "Enter the element you wish\n";
				cin >> elem;
				L2.add(elem);
				Lc2.add(elem);
			}

		}
		cout << endl;
		break;

	case 3:
		int size_chec;
		cout << "Enter 1 to add to List 1 or Enter 2 to enter an element to list 2\n";
		cin >> check;
		while (check != 1 && check != 2){

			cout << "Error not a valid entry, try again :";
			cout << endl;
			cin >> check;
		}


	
		if (check == 1){
			if (L1.isEmpty()){ cout << "Error there are no elements in this list\n"; }
			else{

				int elem;
				int ind;

				cout << "Enter the index onto which you would like to place your element\n";
				cin >> ind;
				size_chec = L1.size();

				while (ind < 0 || ind > size_chec){

					cout << "Error not a valid entry, try again :";
					cin >> ind;
					cout << endl;

				}


				cout << "Enter the element you wish\n";
				cin >> elem;
				L1.insert(ind, elem);
				Lc1.insert(ind, elem);
			}

		}
		else
		{
			if (L2.isEmpty()){ cout << "Error there are no elements in this list\n"; }
			else{
				int elem;
				int ind;

				cout << "Enter the index onto which you would like to place your element\n";
				cin >> ind;

				size_chec = L2.size();

				while (ind < 0 || ind > size_chec){

					cout << "Error not a valid entry, try again :";
					cin >> ind;
					cout << endl;

				}

				cout << "Enter the element you wish\n";
				cin >> elem;
				L2.insert(ind, elem);
				Lc2.insert(ind, elem);
			}
		}
		cout << endl;
		break;

	case 4:


		cout << "Enter 1 to remove from List 1 or Enter 2 to remove an element from list 2\n";
		cin >> check;
		while (check != 1 && check != 2){

			cout << "Error not a valid entry, try again :";
			cin >> check;
			cout << endl;
		}


		if (check == 1){

			if (L1.isEmpty()){ cout << "Error there are no elements in this list, add them first \n"; }
			else{

				int ind;
				cout << "Enter the index of the element you would like to remove\n";
				cin >> ind;

				while (ind<0 || ind >= L1.size()){

					cout << "Error not a valid entry, try again :";
					cin >> ind;
					cout << endl;

				}

				L1.remove(ind);
				Lc1.remove(ind);

			}

		}
		else{
			if (L2.isEmpty()){ cout << "Error there are no elements in this list, add them first \n"; }
			else{
				int ind;
				cout << "Enter the index of the element you would like to remove\n";
				cin >> ind;

				while (ind<0 && ind >= L2.size()){

					cout << "Error not a valid entry, try again :";
					cin >> ind;
					cout << endl;

				}

				L2.remove(ind);
				Lc2.remove(ind);

			}
		}
		cout << endl;

		break;

	case 5:
		int lister;
		cout << "Enter 1 to delete List 1;\n2 to delete list 2;\n";
		cin >> lister;
		while (lister != 1 && lister != 2){

			cout << "Error not a valid entry, try again :";
			cin >> lister;
			cout << endl;
		}

		if (lister == 1){

			L1.clear();
			Lc1.clear();
		}
		else
		{

			L2.clear();
			Lc2.clear();

		}
		cout << endl;
		break;

	case 6:

		cout << "List one is ";

		if (L1.isEmpty() == true){

			cout << "is empty " << endl;
		}
		else{

			cout << "is not empty " << endl;
		}

		cout << endl;

		cout << "List two is ";

		if (L2.isEmpty() == true){

			cout << "is empty " << endl;
		}
		else{

			cout << "is not empty " << endl;
		}

		cout << endl;
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
		break;

	case 7:

		int numb;

		cout << "Would you like to check list 1 or list 2 ? (enter 1 for list 1, enter 2 for list 2)\n";

		cin >> numb;

		while (numb != 1 && numb != 2){

			cout << "Error enter either 1 or 2";
			cin >> numb;
			cout << endl;
		}
		int numbr;
		cout << "What is the element you're looking for ?\n";
		cin >> numbr;
		cout << endl;

		if (numb == 1){
			if (L1.isEmpty()){ cout << "Error there are no elements in this list\n"; }
			else{
				if (L1.contains(numbr)){

					cout << "It does contain said number \n";

				}
				else{

					cout << "It does not contain said number \n";
				}
			}
		}
		else{
			if (L2.isEmpty()){ cout << "Error there are no elements in this list\n"; }
			else{
				if (L2.contains(numbr)){

					cout << "It does contain said number \n";

				}
				else{

					cout << "It does not contain said number \n";
				}
			}

		}

		cout << endl;
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
		break;

	case 8:
		cout << "Will it be list 1 or 2 ? (enter number)\n";//  asks user for whcih list
		int list;
		cin >> list;

		while (list != 1 && list != 2){

			cout << "Error, between one and three. try again\n";
			cin >> list;
		}

		cout << "Enter the index of the number you want \n";
		int nombre;
		cin >> nombre;

		switch (list){

		case 1:
			if (L1.isEmpty() == false){

				while (nombre >= L1.size() || nombre < 0){

					cout << "Error enter a valid index\n";
					cin >> nombre;


				}


				cout << "the number for index " << nombre << " is " << L1.get(nombre);
			}
			else{

				cout << "Error list is empty\n";
			}

			break;

		case 2:
			if (L2.isEmpty() == false){

				while (nombre >= L2.size() || nombre < 0){

					cout << "Error enter a valid index\n";
					cin >> nombre;


				}

				cout << "the number for index " << nombre << " is " << L2.get(nombre);
			}
			else{

				cout << "Error list is empty\n";
			}
			break;

		default:
			//should never come here
			break;



		}
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
		break;

	case 9:

		cout << "List one is the following :\n";
		cout << L1;
		cout << endl << endl;
		cout << "List 2 is the following :\n";
		cout << L2;
		cout << endl;

		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
		break;

	case 10:

		if (L1.isEmpty() == true || L2.isEmpty() == true){// checks to see if one of the two lists are empty
			cout << "operation invalid, one or both of the two lists have no values\n"; // omits operator if one of two lists have no values
		}
		else{// if not true, add operator is computed
			cout << "adding list one and list 2 onto list 3 \n";

			L3 = Lc1 + L2;

			reset(Lc1, L1);
			reset(Lc2, L2);
		}

		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();

		break;

	case 11:

	
		if (L1.isEmpty() == true || L2.isEmpty() == true){// checks to see if one of the two lists are empty
			cout << "operation invalid, one or both of the two lists have no values\n"; // omits operator if one of two lists have no values
		}
		else{// if not , - operator is computed
			cout << "subtracting list two from list one and sending to list 3\n";
			L3 = Lc1 - Lc2;
			reset(Lc1, L1);
			reset(Lc2, L2);
		}
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
		break;

	case 12:

		cout << "cout checking if L1 and L2 are equal \n";


		if (L2.isEmpty() == true && L1.isEmpty() == false){// checks to see if L2 is empty and L1 is not

			cout << "No they're not the same\n";

		}
		else if(L1.isEmpty() == true &&L2.isEmpty() == false){// checks to see if L1 is empty and L2 is not
		
			cout << "No they're not the same\n";
		
		}
		else if (L1.isEmpty() == true && L2.isEmpty() == true){// checks to see if both lists are empty
		
			cout << "Yes, they are the same\n";
		}
		
		else if ((L1 != L2) == true){// checks to see if both lists are equal

			cout << "No they're not the same\n";
		}
		else{
		
			cout << "Yes, they are the same\n";
		}
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();

		break;
	case 13:

		cout << "Will it be list 1,2 or 3 ? (enter number)\n";//  asks user for whcih list
		
		cin >> list;

		while (list != 1 && list != 2 && list != 3){
		
			cout << "Error, between one and three. try again\n";
			cin >> list;
		}

		cout << "Enter the index of the number you want \n";
		
		cin >> nombre;

		switch (list){
		
		case 1:
			if (L1.isEmpty() == false){

				while (nombre >= L1.size() || nombre < 0){
				
					cout << "Error enter a valid index\n";
					cin >> nombre;


				}


				cout <<"the number for index " << nombre << " is " << L1[nombre];
			}
			else{
			
				cout << "Error list is empty\n";
			}

			break;

		case 2:
			if (L2.isEmpty() == false){

				while (nombre >= L2.size() || nombre < 0){

					cout << "Error enter a valid index\n";
					cin >> nombre;


				}

				cout << "the number for index " << nombre << " is " << L2[nombre];
			}
			else{

				cout << "Error list is empty\n";
			}
			break;

		case 3:


			if (L3.isEmpty() == false){
				
				while (nombre >= L3.size() || nombre <0){

					cout << "Error enter a valid index\n";
					cin >> nombre;


				}

				cout << "the number for index " << nombre << " is " << L3[nombre];
			}
			else{

				cout << "Error list is empty\n";
			}
		}


		cout << endl;
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
		break;
	case 14:
		cout << "for list one \n";
		cout << L1 << endl << endl;
		cout << "for list two \n";
		cout << L2 << endl << endl;
		cout << "for list three \n";
		cout << L3 << endl << endl;
		cout << "Press any key to continue . . ." << endl;
		cin.ignore();
		cin.get();
	case 0:
		break;
	default:
		//it should never reach this point
		break;
	}

	}


	return 0;
}

void reset(LinkedList& printed, LinkedList& copied){

	if (printed.isEmpty() == false){
	
		printed.clear();
	}

	for (int i = 0; i < copied.size(); i++){

		printed.add(copied.get(i));

	}


}