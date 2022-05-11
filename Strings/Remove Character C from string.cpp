#include <iostream>
#include <cstring>
using namespace std;

string removeAllOccurrencesOfChar(string input, char c) {
    // Write your code here
	string result="";
	for(int i=0;i<input.length();i++){
		if(input[i]!=c){
			result+=input[i];
		}
	}return result;
}

int main() {
    string input;
    char c;
    cin >> input >> c;
    string output = removeAllOccurrencesOfChar(input, c);
    cout << output << endl;
    return 0;
}
