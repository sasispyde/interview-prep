#include <iostream>
#include <vector>
#include <map>

using namespace std;

// My function naive solution O(N ^ 2)
int remove_duplicates_in_sorted_array(vector<int>& array){
	
	if(array.size() > 0){
		for(int i = 0; i < array.size() - 1; i++){
			if(array.at(i) == array.at(i+1)){
				int index = i + 1;
				array.erase(array.begin() + index);
				i = i -1;
			}
		}	
	} else {
		return array.size();
	}
	
	return array.size();
}

// Remove duplicates by using two pointer O(n)
int removeDuplicates(vector<int>& array) {
	if(array.size() == 0) return 0;

	int i = 0;
	for(int j  = 1;  j < array.size(); j++){
		if(array.at(j) != array.at(i)){
			i++;
			array.at(i) = array.at(j);
		}
	}

	return i + 1;
}

// Remove Element in the array Time Complaxity is O(N);
int removeElement(vector<int>& array, int element){
	int n = array.size();
	
	if(n == 0) return 0;

	int j = 0; 
	for(int i = 0; i < array.size(); i++){
		if(array.at(i) != element){
			array.at(j) = array.at(i);
			j++;
		}
	}
	return j;
}

int main(){
	vector <int> array;
	array.push_back(1);
	array.push_back(2);
	array.push_back(1);
	array.push_back(3);
	array.push_back(4);
	array.push_back(5);
	array.push_back(5);

	int element = 1;

	int length = removeElement(array,element);
	for(int i = 0; i < length; i++){
		cout << array.at(i) << endl;
	}
}