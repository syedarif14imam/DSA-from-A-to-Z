// INTUTION
//JITNI SPACES UTNE WORDS ie WORDS = SPACES +1
/*First we will take a “count” variable and initialize it with 1 because any given Input would contain at least 1 string.
Now, we will iterate through the String (here, “input”) using a for loop.
For every element we will check if that element is equal to ‘  ’ or not.
If we encounter any space(i.e., ‘  ’), the “count” will increment by 1.
Finally we will return “count”.*/


#include <iostream>
#include <cstring>
using namespace std;

int countWords(string input) {
	// Write your code here
	int count = 1;
	for (int i = 0; i < input.size(); i++) {
		if (input[i] == ' ') {
			count++;
		}
	}
	return count;
}

int main() {
    string input;
    getline(cin, input);
    int output = countWords(input);
    cout << output << endl;
    return 0;
}
