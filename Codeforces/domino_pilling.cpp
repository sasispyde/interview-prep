#include <iostream>
using namespace std;

int main(){
	// get the box size;
	int m;
	int n;
	cin >> m >> n;

	// total fields in the box
	int totalSquares = m * n;
	int maximumDomino = 0;

	// find how many suqares are thrie;
	while(totalSquares > 0 && totalSquares >= 2) {
		totalSquares = totalSquares - 2;
		maximumDomino++;
	}

	// prin the maximum values
	cout << maximumDomino;
}