#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
	// deciding substring length
	for (int substr_length = 1; substr_length <= input.length(); substr_length++) {
		//pick starting point
		for (int start = 0; start <= input.length() - substr_length; start++) {
			//pick ending point 
			int end = start + substr_length - 1;
			for (int substr_index = start; substr_index <= end; substr_index++) {
				cout << input[substr_index] ;
			}
			cout << endl;

		}
	}
}


int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
