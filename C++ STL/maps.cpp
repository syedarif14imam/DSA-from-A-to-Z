#include <bits/stdc++.h>
using namespace std;

//function to print map values
void print (map<int, string > &m) {
	cout << m.size() << endl;
	for (auto &pair : m) {
		cout << pair.first << " " << pair.second << endl;
	}
}

int main() {

	//declare and initialize key and corresponding values to it
	map<int , string> m;
	m[1] = "abc"; // TC-> O(log(n)) n is the current size of map
	m[5] = "cdc";
	m[3] = "acd";
	m["abcd"] = "abcd"; // TC-> s.size()*log(n) coz comparison is made btwn previous included string keys thats why TC is increased and during insertion comparison is done usually in case of maps

	m[6]; //map with empty value but still it takes O(log(n=1)) with value as empty string and incase of int it stores 0 value and insert empty in case of containers
	m.insert({4, "afg"}); // inserting a map

	// printing  key and values.
	map<int, string> :: iterator it;
	for (it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}

	// using AUTO KEYWORD to print key and values.
	for (auto &pair : m) {
		cout << pair.first << " " << pair.second << endl; // to access the pair also the TC is O(log(n)) and the TC of loop is O(nlog(n)).
	}

	print(m); //function call.

	//FIND A VALUE
	auto it = m.find(3); //TC -> O(log(n))

	//to erase a pair
	if (it != m.end())
		m.erase(it); //TC -> log(n)

	m.clear(); //clears all map values

	if (it == m.end()) {
		cout << "NO VALUE" << endl;
	} else {
		cout << (*it).first << " " << (*it).second << endl;
	}

  return 0;
}

/*Given N strings print unique strings in lexographical order with their frequency
N <= 10^5
|S| <= 100000
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

  // your code goes here
	map <string , int> m;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		// m[s] = m[s] + 1;
		m[s]++;

	}

	for (auto pr : m) {
		cout << pr.first << " " << pr.second << endl;
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

O/P ->
  
abc 3
def 1
ghj 3
jkl 1  











