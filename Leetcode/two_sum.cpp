#include <iostream>
#include <vector>
#include <map>
using namespace std;


vector<int> two_sum( vector<int> array, int sum ){

	int length = array.size();
	
	vector<int> index;
	map<int,int> map;

	for(int i = 0; i < length; i++){
		map.insert(pair<int,int> (array.at(i),i));
	}

	for(int i = 0; i < length; i++){
		int difference = sum - array.at(i);
		if( map.find(difference) != map.end() && map.find(difference)->second != i){
			index.push_back(i);
			index.push_back(map.find(difference)->second);
			return index;
		}
	}
	return index;
}

int main(){
	vector<int> array;
	array.push_back(0);
	array.push_back(1);
	array.push_back(9);
	array.push_back(4);
	array.push_back(0);
	array.push_back(56);
	array.push_back(90);
	array.push_back(3);

	int sum = 0;

	vector<int> index = two_sum(array, sum);
	int len = index.size();
	
	for(int i = 0; i < len; i++){
		cout << index.at(i) <<endl;
	}
}