#include <bits/stdc++.h>
using namespace std;

void printS(int ind, vector<int> &ds , int s, int sum, int arr[] , int n) {
	if (ind == n) {
		if (s == sum) {
			for (auto it : ds) cout << it << " ";
			cout << endl;

		}
		return;
	}
	//take or pick particular index into  the subsequence
	ds.push_back(arr[ind]);
	s += arr[ind];
	printS(ind + 1, ds, s, sum, arr, n);
	s -= arr[ind];
	ds.pop_back();

	//not pick or not take this condition, this element is not added to your subsequence
	printS(ind + 1, ds, s, sum, arr, n);
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






