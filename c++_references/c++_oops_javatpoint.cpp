/*
	* Classes and Objects;

	* Objects : 
		
		* it describes the Real World Entity; Such as Pen Bike and More;
			
		* it have the state and the behaviour; 

		* state -> it means the Data;

		* behavior -> it means the Functionality; 

		* it is a runtime entity it is created at Runtime;

		* All members of the class can be accessed by using the objects;

		* Example :

			* Student s1;

	* Classes : 

		* in c++ the object is a group of similar objects;

		* it can have the fields, functions(Methods), constructor and More;

	* Constructor : 

		* Default constructor -> this type of constructor Does not have any arguments it is called at the time of object creation;
			
		* Parameterized constructor -> same as default constructor but it have some arguments

		* Copy constructor : 
			
			* it is used to initialize the member variables of one object by the values of another object of the same class.

			* Another object of the same class is passed as a reference in the argument which is then used to initialize the member variables of the concerned object.

			* When the old object is passed an argument, the values of the member variables of the old object can be assigned to members of the new object explicitly.

			* 
*/

#include <iostream>
using namespace std;

class Student {
	public : 
		int id;			// Field or Data member;
		string name;	// Field or Data member;
		float average;	// Field or Data member;

		// Default Constructor;
		Student() {
			cout << "Log From Default Constructor" << endl;
		}

		Student(int sId, string sName, float sAvg) {
			id = sId;
			name = sName;
			average = sAvg;
		}

		// using the insert method to initialize the data;
		void insert(int sId, string sName, float sAvg) {
			id = sId;
			name = sName;
			average = sAvg;
		}

		// Print the values;
		void print() {
			cout  << id << "\t\t\t" << name << "\t\t\t" << average << endl;
		}
};

int main() {
	// creating the objects
	Student sasi;
	Student kowshe;
	Student madhu = Student(03,"Madhubalan",80);

	// initialize the values by using the class method
	sasi.insert(01,"Sasidharan", 70.5);
	kowshe.insert(02,"Kowshe",90.4);

	// display the id, name and average for detailed view;
	cout  << "Id" << "\t\t\t" << "Name" << "\t\t\t\t" << "Average" << endl;
	cout << "-----------------------------------------" << endl;

	// calling the print method to print out the values of an each objects;
	sasi.print();
	kowshe.print();
	madhu.print();

	// return value;
	return 0;
}

