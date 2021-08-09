#include <iostream>
using namespace std;

class Rooms {
public :
	int numberOfRooms;
	int room;
	int people;
	int totalFreeRooms = 0;

	void findTotalFreeRooms(int room,int people) {
		int difference = people - room;
		if(difference >= 2) {
			totalFreeRooms++;
		}
	}
};

int main()
{
	Rooms obj;
	cin >> obj.numberOfRooms;

	for(int i = 0; i < obj.numberOfRooms; i++) {
		cin >> obj.room;
		cin >> obj.people;
		obj.findTotalFreeRooms(obj.room,obj.people);
	}

	cout << obj.totalFreeRooms;
	return 0;
}