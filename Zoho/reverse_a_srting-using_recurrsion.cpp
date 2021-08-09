#include <iostream>
#include <cstring>
using namespace std;

void reverse_arr(string a[],int size){
    if (size > 1)
  	{
	    string temp = a[0]; 
	    a[0]= a[size-1]; 
	    a[size-1]= temp;

	    reverse_arr(a+1, size-2);
  	} else {
  		return;
  	}
}

int main(){
	
	string str;
	cout << "Enter the string to reverse" << endl;

	getline(cin , str , '\n');

	int length = 1;
	for(int i = 0; i < str.length(); i++){
		if(str[i] == ' '){
			length++;
		}
	}
	
	string array[length];
	int index = 0;

	string temp = "";

	for(int i = 0; i < str.length(); i++){
		if(str[i] == ' '){
			array[index] = temp;
			temp = "";
			index++;
		} else if((i+1 == str.length())){
			temp += str[i];
			array[index] = temp;
			temp = "";
		} else {
			temp += str[i];
		}
	}

	reverse_arr(array,length);

	for(string item : array){
		cout << item << endl;
	}

	return 0;
}