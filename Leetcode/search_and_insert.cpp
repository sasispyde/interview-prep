#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int searchInsert( vector<int>& nums, int target ){
	
	// Do Binary Search for Finding the element in the sorted array
	int left = 0;
	int rigth = nums.size() - 1;

	if(nums[rigth] < target) return rigth + 1; 

	while( left <= rigth ) {
		int mid = (left + rigth+1) / 2;
		
		if( nums[mid] == target ){
			return mid;
		}
		if( nums[mid] > target ){
			rigth = mid - 1;
		} else {
			left = mid + 1;
		}

		cout << "dddd";
	}
	return left;
}

int main() {
	vector <int> array;
	array.push_back(1);
	array.push_back(2);
	array.push_back(4);
	array.push_back(6);

	int target = 8;
	int position = searchInsert(array , target);
	cout << position << endl;
}