/*
	* Queue it is similer to stack;

	* it is worked under the concept called FIFO;

	* FIRST IN FIRST OUT;

	* it is a linear data structure;
	
	* the only difference is between the stack and the queue is in removing the element like stack removes the element from most recently added element and queue is removing the element fom least recently added element;
	
	* this is the major difference, otherwise the both are same;

	* the operations are called : 

		* enqueue -> this will add the element to the queue;

		* dequeue -> this will removes the element from least added element;

		* front -> get the first item of queue

		* rear -> get last item of queue
*/

#include <bits/stdc++.h>
using namespace std;

class Qnode {
	public :
		int data;
		Qnode * next;

		// this is constructor it will called initially so Qnode(with value) this will called initally so set data and value at here;
		Qnode(int value) {
			data = value;
			next = NULL;
		}
};

class Queue {
	public : 
		Qnode *rear, *front;

		// constructor it is first called; so in this place to set a initial values to the valriables;
		Queue() {
			rear = NULL;
			front = NULL;
		}

		void enqueue(int data) {
			// create a new node like 
			Qnode * newNode = new Qnode(data);

			// set if the rear is NULL make front and rear to temp;
			if(!rear) {
				front = rear = newNode;
				return;
			}

			// Make rear -> next = newNode;
			// and make rear to newNode; rear = newNode;
			rear -> next = newNode;
			rear = newNode;
		}

		void dequeue() {
			// edge case if the front is NULL return;
			if(!front) return;

			Qnode * tempNode = front;

			front = front -> next;

			if(!front) rear = NULL;

			delete(tempNode);
		}

		void printQueue(){
			Qnode * temp = front;
			cout << "Elements in the queue : " << endl;
			while(temp) {
				cout << temp -> data << endl;
				temp = temp -> next;
			}
		}
};

// void printQueue(Qnode* queue) {
// 	cout << "Elements in the queue : " << endl;
// 	while(queue) {
// 		cout << queue -> data << endl;
// 		queue = queue -> next;
// 	}
// }

// company email,usernmae,name, company name filter; company type company_transport_service 
// passenger_log is_group_booking travel_status : 1 -> generate invoice
// transport_

// company_id,
// info 

// trip_id,
// escort_id,


int main() {
	
	Queue queue;

	queue.enqueue(10);
	queue.enqueue(20);
	queue.enqueue(30);
	queue.enqueue(40);
	queue.enqueue(50);

	// printQueue(queue.front);
	// printQueue(queue.front);

	queue.printQueue();
	queue.printQueue();
}