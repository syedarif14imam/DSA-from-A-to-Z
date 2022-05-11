#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string reverseEachWord(string input)
{
    // Write your code here
	int l=0;
	int r=0;
	while(l<input.size()){
		while(r<input.size() && input[r] !=' ')
			r++;
		//reversing characters between l and r 
		reverse(input.begin()+l,input.begin()+r);
		l=r+1;
		r=l;
	}
	return input;
}

int main()
{

    string str;
    getline(cin, str);
    string ans = reverseEachWord(str);
    cout << ans << endl;
    ;
}
