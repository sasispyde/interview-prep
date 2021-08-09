#include <iostream>
#include <vector>
#include <climits>

using namespace std;

// Naive solution (O( N^2 ));
int maxSubArray(vector<int>& nums) {
    int max_sum = INT_MIN;
    int length = nums.size();

    if(length <= 0) return 0;

    for(int i = 0; i < length; i++){
    	int temp_sum = 0;
    	for(int j = i; j < length; j++) {
    		temp_sum += nums[j];
    		if(max_sum < temp_sum) {
    			max_sum = temp_sum;
    		}
    	}
    }

    return max_sum;
}

// using Divide and conquer it takes ( O (nlogn) );

// using kadenes algorithm ( O(N) );

int maxSubArray_using_kadenes_algorithm( vector<int>& nums ){
	int current_sum = nums[0];
	int max_sum = current_sum;
	int length = nums.size();

	if(length < 1) return 0;

	for(int i = 1; i < length; i++){
		current_sum = max( ( current_sum + nums[i] ), nums[i] );
		max_sum = max( current_sum , max_sum );
	}

	return max_sum;
}

int minSubArray_using_kadenes_algorithm( vector<int>& nums ){
	int min_sum = INT_MAX;
	int current_sum = nums[0];
	int length = nums.size();

	if(length < 1) return 0;

	for(int i = 0; i < length; i++){
		current_sum = min( ( current_sum + nums[i] ), nums[i] );
		min_sum = min( current_sum , min_sum );
	}

	return min_sum;
}


int main(){

	vector <int> array;

	array.push_back(1);
	// array.push_back(1);
	// array.push_back(-3);
	// array.push_back(4);
	// array.push_back(-1);
	// array.push_back(2);
	// array.push_back(1);
	// array.push_back(-5);
	// array.push_back(4);

	int sum = maxSubArray_using_kadenes_algorithm( array );

	cout << sum;
	
	return 0;
}