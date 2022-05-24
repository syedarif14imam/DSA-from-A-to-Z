#include <bits/stdc++.h>
using namespace std;

int main() {

  // ITERATORS points the elements of the STL containers like as pointers do

	vector<int> v = {2, 3, 5, 6, 7};
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	//iterator decleration
	vector<int> ::iterator it = v.begin();
	cout << (*(it + 1)) << endl;

	//elements of containers (here vector) can be accessed or iterated using iterators
	vector <int> ::iterator it = v.begin();
	for (it = v.begin(); it != v.end(); it++) {
		cout << (*it) << endl;
	}


	//vector of pair where value of pairs are being accesed using iterators
	vector<pair<int, int> > v_p = {{1, 2}, {2, 3}, {3, 4}};
	vector<pair<int, int> > :: iterator it;
	for (it = v_p.begin(); it != v_p.end(); it++) {
	cout << (*it).first << " " << (*it).second << endl; //1st way to print value of pair using (*it).first method
	}

					//(*it).first == (it->first)  >-  more preferred

	for (it = v_p.begin(); it != v_p.end(); it++) {
		cout << (it->first) << " " << (it->second) << endl; //2nd way to print value of pair using (it->first) method
	}
	}

	//range based loops -- can be used as an alternative way to use loops (can also be used with other conainers)
	for (int &value : v) { //using reference so if any changes made will reflect.
		value++;
		//cout << value << " ";
	}

	for (int value : v) {

		cout << value << " ";
	}
	cout << endl;

	//using range based loops for vector of pairs.

	vector<pair<int, int>> v_p = {{1, 2}, {2, 3}};
	for (pair<int, int> &value : v_p) {
		cout << value.first << " " << value.second << endl;
	}

	// AUTO KEYWORD -- dynamically determines data type of variable

	auto a = 1.05; // automatically determines data type no need to specify
	cout << a << endl;


	// no need to declare (vector<int> ::iterator it)
	for (auto it = v.begin(); it != v.end(); it++) {
		cout << (*it) << endl;
	}

	// usage of both auto and range based loops makes code tidy and short
	vector<pair<int, int>> v_p1 = {{1, 2}, {2, 3}};
	for (auto &value : v_p1) {
		cout << value.first << " " << value.second << endl;
	}


	
	return 0;
}




