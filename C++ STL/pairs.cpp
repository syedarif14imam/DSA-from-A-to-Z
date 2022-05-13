#include <bits/stdc++.h>

using namespace std;

int main() {

	pair<int, string> p; //making pair (p) of different data types

	//ways to intialise pair values

	p = make_pair(2, "abc"); // 1st way
	p = {2, "abc"};		 // 2nd way

	pair<int, string> &p1 = p; //reference is used here
	p1.first = 3;

	//printing pair values
	cout << p.first /*prints 1st value*/ << " " << p.second /*prints 2nd value*/ << endl;


	int a[] = {1, 2, 3};
	int b[] = {2, 3, 4};

	//pairs of arrays
	pair<int, int> p_array[3];
	p_array[0] = {1, 2};
	p_array[1] = {2, 3};
	p_array[2] = {3, 4};

	//swap elements in array pairwise
	swap(p_array[0], p_array[2]);

	for (int i = 0; i < 3; i++) {
		cout << p_array[i].first << " " << p_array[i].second << endl;
	}

	//taking input of first element of pair and similarly of second element
	cin >> p.first;
	cout << p.first;


	return 0;

}








