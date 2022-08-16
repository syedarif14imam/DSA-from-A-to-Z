#include <bits/stdc++.h>
using namespace std;


int main() {
	//Write your code here
	int n, i = 0;
	cin >> n;
	int arr [n]; // taking input of array
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x; // the element whose index is to be found
	cin >> x;

	for (i = 0; i < n; i++) {
		if (arr[i] == x) {
			cout << i << endl;
			break;
		}

	}

    //if element not found
    if (arr[i]!=x) {
		cout << -1;
	}

	return 0;
}







