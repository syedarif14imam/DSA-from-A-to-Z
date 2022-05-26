#include <bits/stdc++.h>
using namespace std;

void print(int ind, vector<int> &ds , int arr[] , int n) {
	if (ind == n) {
		for (auto it : ds) {
			cout << it << " ";
		}
		if (ds.size() == 0) {
			cout << "{}";
		}
		cout << endl;
		return;
	}
	//take or pick particular index into  the subsequence
	ds.push_back(arr[ind]);
	print(ind + 1, ds, arr, n);
	ds.pop_back();

	//not pick or not take this condition, this element is not added to your subsequence
	print(ind + 1, ds, arr, n);
}


int main() {

	// your code goes here
	int n = 3;
	int arr[] = {3, 1, 2};
	vector<int> ds; // data structure to store index elements
	print(0, ds, arr, n);


	return 0;
}

TC-> O(2^n)
SC-> O(n)
 
O/P->
  
3 1 2 
3 1 
3 2 
3 
1 2 
1 
2 
{}






