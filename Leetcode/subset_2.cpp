#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    
    int length = nums.size();

    vector<vector<int>> demo;

    map<string, bool> added;

    for(int i = 0; i < length; i++){
    	demo.push_back({ nums[i] });
    	for(int j = i; j < length; j++){
    		demo.push_back({ nums[i],nums[i] });
    	}
    }

    return demo;
}

int main(){
	int array[] = { 1,2,2 };
	int length = sizeof(array) / sizeof(int);

	vector<int> nums;

	vector<vector<int>> result;
	for(int i = 0; i < length; i++){
		nums.push_back(array[i]);
	}

	result = subsetsWithDup(nums);

	for(int i = 0; i < result.size(); i++){
		for(int j = 0; j < result[i].size(); j++){
			cout << result[i][j];
		}
		cout << endl;
	}

	return 0;
}