# Customized-LinkedList
Designed custom integer-based linkedlists that incorporate operator overloading along with concepts of inheritance and polymorphism. This project was originally completed in 2017. There are two linkedlists in this program, various basic addition and removal operations can be done on each linkedlist. The operators +,-,!=, << and [] are overloaded toperform additional tasks by either creating a new linkedlist from the previous two or outputting their information.

# How to use
It is important to call option 1. above all, this initalizes the values of both linkedlists. If this is not done then operations 2-14 will be ignored. Once this is done, operations 2-9 are used for individual changes to each linkedlist. Operations 10-14 rely on operator overloading. Each operator can be seen in the following :

## + operator 
This is used to add two linkedlists together. So for instance if L1 has (1,2) and l2 has (3,4). The overloaded add operator will combine both lists and return a new one that ressembles (1,2,3,4). This is then stored in L3.

## - operator 
This is used to subtract values that the linkedlists have in common. So if L1 = (1,2,3 and L2= (3,4,5) ,the result of this subraction will be L3 = (1,2) 

## != operator
Used to check if two linkedlists are the same. So if L1 =(1,2) and L2 = (1,2), then this will return a false

## << operator
This allows a linkedlist to print out all of its nodes. So if L = (1,2,3) and this operation is used -> "cout << L;". Then the result will be "1 2 3"

## [] operator
Used to access the value of a node at a specific index of a linkedlist. For example let L = (1,2,3) then L[1] will return 2



