// merge two sorted array

#include <iostream>
using namespace std;
#include <map>

int main(){
	
	int size_of_array_1 = 8;
	int size_of_array_2 = 10;

	cout << "Enter the size of first array" <<endl;
	cin >> size_of_array_1;

	cout << "Enter the size of second array" <<endl;
	cin >> size_of_array_2;
	
	int array1[size_of_array_1];
	int array2[size_of_array_2];

	cout << "Enter the array 1 elements in sorted order" << endl;
	for(int i = 0; i < size_of_array_1; i++){
		cin >> array1[i];
	}

	cout << "Enter the array 2 elements in sorted order" << endl;
	for(int i = 0; i < size_of_array_2; i++){
		cin >> array2[i];
	}

	map<int, int> map;

	for(int i = 0; i < size_of_array_1; i++){
		map.insert(pair<int, int>(array1[i],array1[i]));
	}

	for(int i = 0; i < size_of_array_2; i++){
		map.insert(pair<int, int>(array2[i],array2[i]));
	}

	int length = map.size();
	int merger_array[length]; 
	int index = 0;

	for (auto it = map.begin(); it != map.end(); ++it){
		merger_array[index] = it->first;
		index++;
	}  

	for(int i = 0; i < length; i++){
		cout << merger_array[i] << "\t";
	}

}