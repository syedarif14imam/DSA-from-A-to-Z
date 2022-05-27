#include <bits/stdc++.h>
using namespace std;

int printS(int ind , int s, int sum, int arr[] , int n) {
	//condition not satisfied
	//strictly done if array contains positives only
	if(s > sum) return 0;
	
	if (ind == n) {
		//condtion satisfied
		if (s == sum) return 1;
		//condtion not satisfied
		else return 0;
	}
	//take or pick particular index into  the subsequence

	s += arr[ind];

	int l = printS(ind + 1, s, sum, arr, n);


	s -= arr[ind];

	//not take
	int r = printS(ind + 1, s, sum, arr, n);

	return l + r;
}


int main() {
  // your code goes here

	int arr[] = {1, 2, 1};
	int n = 3;
	int sum = 2;
	cout << printS(0, 0, sum, arr, n);


	return 0;
}

TC -> 2^n.





