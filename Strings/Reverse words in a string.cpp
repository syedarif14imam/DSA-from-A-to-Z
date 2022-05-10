#include <iostream>
using namespace std;

string reverseStringWordWise(string input)
{
    //Write your code here
	string result;
	int i =0;
	int n = input.length();
	while(i<n){
		//starting point of substring
		if(i<n && input[i]==' ')i++;
		if(i>=n) break;
		int j=i+1;
		//ending point of substring
		while(j<n && input[j]!=' ')j++;
		//using substr function to store the substring between i & j
		string sub= input.substr(i,j-i);
		if (result.length()==0) result=sub;
		else result = sub + " " + result;
		i= j+1;
	}
	return result;
		
}

int main()
{
    string s;
    getline(cin, s);
    string ans = reverseStringWordWise(s);
    cout << ans << endl;
}
