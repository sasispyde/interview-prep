#include <iostream>
using namespace std;

int main() {

	int costOfFirstBanana;
	int money;
	int totalBananaToBuy;

	cin >> costOfFirstBanana >> money >> totalBananaToBuy;

	int totalCost = 0;
	for(int i = 0; i <= totalBananaToBuy; i++) {
		totalCost = totalCost + ( i * costOfFirstBanana );
	}
	
	int moneyToBorrow = money > totalCost ? 0 : totalCost - money;
	cout << moneyToBorrow << "  " << moneyTemp;
}