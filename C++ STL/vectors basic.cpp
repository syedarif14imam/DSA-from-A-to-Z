#include <bits/stdc++.h>
using namespace std;

//function to print vector elements
void printVec(vector<int> &v) {
	cout << "size: " << v.size() << endl;
	for (int i = 0; i < v.size(); i++) {
		//v.size() -> O(1) TS
		cout << v[i] << " ";
	}
	v.push_back(2);//imp
	cout << endl;
}

int main() {

//vectors  are similar to arrays but dynamic in size

	vector<int> v;
	//taking input of vector elements

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		printVec(v);
		v.push_back(x); //adds element to the last of  the vector. **TC-> O(1)**
	}
	printVec(v);


	vector<int> v(10, 3);
	 //declaring size of vector and elemnets that will be in it
	v.push_back(7);
	printVec(v);

	v.pop_back();//removes element from the last of the vector. ***TC-> O(1)***
	printVec(v);



	vector<int> v;
	v.push_back(7);
	v.push_back(6);

	//reference is more preffered so its important use it
	vector<int> &v2 = v; //T.C for this copying operation is O(n).
	v2.push_back(5);
	printVec(v);
	printVec(v);//same vector is passed and copy is not used.
	printVec(v2);

	//string vector

	vector<string> v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) { //taking input of strings
		string s;
		cin >> s;
		v.push_back(s);
	}
	printVec(v);

	
	return 0;
}




