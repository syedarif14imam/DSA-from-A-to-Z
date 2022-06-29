#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int start, int end) {

	// Checking the sorted order of the given array
	bool isAsc = arr[0] < arr[1];


	while (start <= end) {
		int mid = start + (end - start) / 2;

		// Check if k is present at mid
		if (k == arr[mid])
			return mid;

		if (isAsc == true)
		{
			// If x smaller, ignore right half
			if (arr[mid] > k)
				end = mid - 1;

			// If x greater, ignore left half
			else
				start = mid + 1;
		}

		// Descending Order
		else
		{
			// If x smaller, ignore left half
			if (arr[mid] > k)
				start = mid + 1;

			// If x greater, ignore right half
			else
				end = mid - 1;
		}

	}
	//Element is not present
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






