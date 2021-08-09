#include <iostream>
#include <cstring>
using namespace std;

int main() {
    string str;
    string pattern;

    cout << "Enter the string" << endl;
    cin >> str;

    cout << "Enter the pattern to search" << endl;
    cin >> pattern;

    int pattern_length = pattern.length();
    int string_length = str.length();

    int index = 0;

    for(int i = 0; i < string_length; i++){
        if(str[i] == pattern[0]){
            index = i;
            int inner_index = 0;
            for(int j = 0; j < pattern_length; j++){
                if(str[index++] == pattern[j]){
                    inner_index++;
                    cout << pattern[j] << endl;
                }
                if(inner_index == pattern_length){
                    cout << "Found at the index of\t" << i <<endl;
                    return 0;
                }
            }
        }
    }
    cout << "index not found\t" << -1 << endl;
}