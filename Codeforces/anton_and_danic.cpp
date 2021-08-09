#include <iostream>
using namespace std;

class Winner {
	public : 
		int numberOfGames;
		string winnersList;

		void findTheWinner(string list) {
			int anton = 0;
			int danic = 0;

			for(int i = 0; i < list.length(); i++) {
				if(list[i]  == 'A') {
					anton++;
				} else {
					danic++;
				}
			}

			if(anton == danic) {
				cout << "Friendship" << endl;
			} else if(anton > danic) {
				cout << "Anton" << endl;
			} else {
				cout << "Danik" << endl;
			}

		}
};

int main() {
	Winner obj;
	cin >> obj.numberOfGames;
	cin >> obj.winnersList;

	obj.findTheWinner(obj.winnersList);
	return 0;
}