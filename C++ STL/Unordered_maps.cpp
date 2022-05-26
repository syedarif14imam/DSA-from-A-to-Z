#include <bits/stdc++.h>
using namespace std;

//function to print map values
void print (unordered_map<int, string > &m) {
	cout << m.size() << endl;
	for (auto &pair : m) {
		cout << pair.first << " " << pair.second << endl;
	}
}


int main() {
	//differences
	// 1.inbuilt implementation ->
	// 2. Time complexity
	// 3. valid key database


	//declare and initialize key and corresponding values to it
	unordered_map<int , string> m;
	m[1] = "abc"; // TC-> O(1)
	m[5] = "cdc";
	m[3] = "acd";
	m[6] = "a";
	m[5] = "cde";

	auto it = m.find(7); //TC -> O(1)
	//to erase a pair
	if (it != m.end())
		m.erase(it); //TC -> log(1)

	m.clear();

	if (it == m.end()) {
		cout << "NO VALUE" << endl;
	} else {
		cout << (*it).first << " " << (*it).second << endl;
	}

 print(m);

return 0;
}



/*Given N strings and Q queries. In each query you are given a string print frequency of that string
N <= 10^6.
|S| <= 100.
Q <= 10^6.
*/


#include <bits/stdc++.h>
using namespace std;

int main() {

	// your code goes here
	unordered_map <string , int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		// m[s] = m[s] + 1;
		m[s]++;

	}

	int q;
	cin >> q;
	while (q--) {
		string s;
		cin >> s;
		cout << m[s] << endl;
	}
  
  return 0;
}

I/P ->
  8
abc
def
abc
ghj
jkl
ghj
ghj
abc
2
abc
ghj

O/P ->
  3
  3




