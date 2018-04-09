#include <iostream>
#include <queue>

class Customer {
public:
	int custNum = 0;					// Customer Number

	// ctor - iterates custNum each time a customer is created.
	Customer() : custNum(custNum++) {}

};
class CashierNode {					// Each node represents a cashier object
public:
	int cashierNum;
	int numCustomers;				// Keeps track of the number of customers in each Cashiers queue.
	Customer arrCustomerQueue[5];	// Each cashier has a queue array of customer objects.
	CashierNode *pNext;				// A pointer to the next cashier object in the linked list.

	// Method's to add customers to the checkout lines.
	// Accepts the cashierNum from which the method
	// should enqueue or dequeue.
	void enqueueCustomer(int cn)
	{
		// Todo
	}
	void dequeueCustomer(int cn)
	{
		// Todo
	}
	// Method to return the number of customers current in a node
	// Accepts the cashierNum for which the method returns the
	// number of customers in its queue.
	int getNumCustomers(int cn)
	{
		// Todo

		return numCustomers;
	}
};
class CashierList {					// A list of cashier objects as a linked list.
private:
	CashierNode *pHead, *pTail;		// Pointers to the head and tail of the linked list.

public:
	// ctor
	CashierList() {
		pHead = pTail = NULL;
	}
	// Method to create a new cashier
	void createCashierNode(int cn)
	{
		CashierNode *pTemp = new CashierNode;
		pTemp->cashierNum = cn;
		pTemp->pNext = NULL;
		if (pHead == NULL)			// The list doesn't yet exist...new node is the head and tail.
		{
			pHead = pTemp;
			pTail = pTemp;
			pTemp = NULL;

		}
		else                        // Otherwise, place the new node after the previous tail.
		{
			pTail->pNext = pTemp;
			pTail = pTemp;
		}
	}

	// Method to search the list of Cashiers to find the shortest queue.
	// Returns cashierNum that indicates the cashier with the shortest queue.
	int locateShortestQueue()
	{
		// Todo

		return cashierNum;
	}
};

// Function Prototypes

// method to build the cashier list
// method to enqueue customers at random intervals.
// method to dequeue customers at random intervals.
int main()
{

	return 0;
}