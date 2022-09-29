**** SETS ****

#include <bits/stdc++.h>
using namespace std;

//function to print map values
void print (set<string> &s) {

	//can print using two different loops
	for (string value : s) {
		cout << value << endl;
	}

	for (auto it = s.begin(); it != s.end(); it++) {
		cout << (*it) << endl;
	}
}

int main() {
	
	// initailisation and decleration of set
	set<string> s;  // sets stores unique elements in *sorted order*

	s.insert("abc"); // TC -> log(n)
	s.insert("zsdf");
	s.insert("bcd");

	auto it = s.find("abc"); // log(n)
	if (it != s.end()) { // to find set element
		cout << (*it);
	}

	if (it != s.end()) { //1st way taking iterator as input to erase set element
		s.erase(it);
	}

	s.erase("bcd");//2nd way taking string as input to erase set element
  
  **** UNORDERED SETS ****
  
  unordered_set<string> s;  // sets stores unique elements in *unsorted order*

	s.insert("abc"); // TC -> O(1)
	s.insert("zsdf");
	s.insert("bcd");

	auto it = s.find("abc"); // O(1)
	if (it != s.end()) { // to find set element
		cout << (*it);
	}
  
   **** MULTI SETS ****
   
  multiset<string> s; //duplicates are allowed in multisets
	s.insert("abc"); // TC -> O(log(n))
	s.insert("zsdf");
	s.insert("bcd");
	s.insert("abc");

	auto it = s.find("abc"); // TC -> O(log(n))
	if (it != s.end()) {// when passed through iterator it deletes only that one element that iterator points
		s.erase(it);
	}

	s.erase("abc"); // in case of string passed it deletes all elements if present multiple times.
  
	print(s);
   
   return 0;
}





