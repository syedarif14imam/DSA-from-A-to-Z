#include <bits/stdc++.h>
using namespace std;

// binary search function
int binarySearch(int arr[], int k, int start, int end) {
	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (k == arr[mid])
			return mid;

		else if (k < arr[mid])
			end = mid - 1;

		else
			start = mid + 1;
	}
	return -1;
}

int main() {

  // your code goes here
	int n ;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int k;
	cin >> k;

	int result = binarySearch(arr, k, 0, n - 1);
	if (result == -1)
		cout << "Not found";
	else
		cout << result << endl;
}






