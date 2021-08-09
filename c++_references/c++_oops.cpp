// onject means -> real world enitity
// oops it is a programming concept to maintaing the software developement by provoiding the some of the concepts like :
// Object -> Classes -> Inheritence -> Polymorphism -> Encapsulation -> Abstraction;

// Object -> which means real world entity and it have an behaviour and all example "pen chair and etc...";
// Classes -> Group of data or collection of objects with some functionality;

#include <iostream>
using namespace std;

class Player {

	public :
		int x = 10;
		int y = 10;
		int speed = 2;

		int move( int a, int b ) {
			return multiply_with_speed(a , b);
		}
	private : 
		int multiply_with_speed(int a, int b) {
			a = a * speed;
			b = b * speed;

			return a * b;
		};
};

int main(){
	
	Player p;

	int total_move = p.move(10,10);
	cout << total_move << endl;

	return 0;
}

