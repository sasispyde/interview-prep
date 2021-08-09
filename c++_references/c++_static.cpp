#include <iostream>
using namespace std;

class Entity { 

	public  : 
		// Local variable;
		int a;
		int b;

		// static variables;

		static int x;
		static int y;

	void print() { 
		// it prints the local variables for all the instances;
		cout << a << " " << b << endl;
	};

	// static functions cannot access the local variables
	static void print_static() {
		cout << x << " " << y << endl;
		// cout << a << " " << b << endl; this linbe shows an error becase of the above definition
	};

	// by passing the instances to the static function to finx the visiblity problem now it access the lovcal variables
	static void print_static( Entity e ) {
		cout << e.a << " " << e.b << endl; 
		//this linbe shows an error becase of the above definition
	};

};

int Entity::x;
int Entity::y;

int main(){

	Entity e1;
	e1.a = 10;
	e1.b = 20;
	e1.print();

	e1.print_static(e1);

	Entity e2;
	e2.a = 15;
	e2.b = 20;
	e2.print();

	Entity e3;
	e3.x = 30;
	e3.y = 40;

	Entity e4;
	e4.x = 50;
	e4.y = 60;

	e3.print_static();
	e4.print_static();

	// it prints last changed values because it is kind of variable used to maintain ther same value for all the instances
	// if any instances changes the value the whole instances will be changed;

	/*  
		
		the above code is prints 50 60
								 50 60

		the above codes meaning is 
		
		Entity::x = 30;
		Entity::y = 40;
		
		Entity::x = 40;
		Entity::y = 50;

		Entity::print_static();
		Entity::print_static();

		And not need to create a instance for a static variable

		the above code is the right way to access the varibale;

		so that why the values get changed;

	*/
}