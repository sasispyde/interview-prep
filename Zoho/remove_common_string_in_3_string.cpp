#include <iostream>
#include <map>
#include <vector>
using namespace std;


vector<string> make_a_string_to_array( string &str ) {
	
	vector<string> array;
	string temp = "";

	for(int i = 0 ; i < str.length(); i++) {
		if( str[i] == ' ' ) {
			array.push_back(temp);
			temp = "";
		} else {
			temp += str[i];
		}

		if( (i +1) == str.length()) {
			array.push_back(temp);
		}
	}
	return array;
}

void print_the_string( vector<string> array,map<string, string>& map1, map<string, string>& map2, map<string, string>& map3 ){

	string str = "";
	for(int i = 0; i < array.size(); i++){
		if(!(map1.find(array[i]) != map1.end() && map2.find(array[i]) != map2.end() && map3.find(array[i]) != map3.end())) {
			str += (array[i] += " ");
		}
	}

	cout << str << endl;
}

int main() {

	string s1 = "Everyday I do exercise if";
	string s2 = "Sometimes I do exercise if i feel stressed";
	string s3 = "Mostly I do exercise on morning";

	/* 
		// getting dynamic input

		cout << "Enter the strings : \n" << endl;
		cin << s1 << s2 << s3;
	*/

	// Make a string into array
	vector <string> array1 = make_a_string_to_array(s1);
	vector <string> array2 = make_a_string_to_array(s2);	
	vector <string> array3 = make_a_string_to_array(s3);

	// store data to map
	map <string,string> map1;
	map <string,string> map2;
	map <string,string> map3;

	// storing the data into map;
	for(int i = 0; i < array1.size(); i++) {
		map1[array1[i]] = array1[i];
	}

	for(int i = 0; i < array2.size(); i++) {
		map2[array2[i]] = array2[i];
	}

	for(int i = 0; i < array3.size(); i++) {
		map3[array3[i]] = array3[i];
	}

	print_the_string(array1,map1,map2,map3);
	print_the_string(array2,map1,map2,map3);
	print_the_string(array3,map1,map2,map3);
}