#include <bits/stdc++.h>
using namespace std;

bool printS(int ind, vector<int> &ds , int s, int sum, int arr[] , int n) {
	if (ind == n) {
		//condition satisfied
		if (s == sum) {
			for (auto it : ds) cout << it << " ";
			cout << endl;
			return true;
		}
		//condition not satisfied
		else return false;
	}
	//take or pick particular index into  the subsequence
	ds.push_back(arr[ind]);
	s += arr[ind];

  //just to make sure no more recursion call is made if the condition is satisfied.
	if (printS(ind + 1, ds, s, sum, arr, n) == true) return true;


	s -= arr[ind];
	ds.pop_back();

	//not pick or not take this condition, this element is not added to your subsequence
	if (printS(ind + 1, ds, s, sum, arr, n) == true) return true;

	return false;
}


int main() {

  // your code goes here
	int n = 3;
	int arr[] = {1, 2, 1};
	int sum = 2;
	vector<int> ds; // data structure to store index elements
	printS(0, ds, 0, sum, arr, n);


	return 0;
}






