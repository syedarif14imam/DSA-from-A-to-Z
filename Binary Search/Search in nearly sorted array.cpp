/*Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
Output: 2 
Output is index of 40 in given array

Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
Output: -1
-1 is returned to indicate element is not present */

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int start, int end, int x)
{
	while (end >= start)
	{
		int mid = start + (end - start) / 2;

		// If the element is present at
		// one of the middle 3 positions
		if (arr[mid] == x)
			return mid;
		if ((mid + 1) >= start && arr[mid - 1] == x)
			return (mid - 1);
		if ((mid - 1) <= end && arr[mid + 1] == x)
			return (mid + 1);

		// If element is smaller than mid, then
		// it can only be present in left subarray
		if (arr[mid] > x)
			return binarySearch(arr, start, mid - 2, x);

		// Else the element can only be present
		// in right subarray
		return binarySearch(arr, mid + 2, end, x);
	}

// We reach here when element is not present in array
	return -1;
}

int main() {
	// your code goes here

  int n;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

  int x;
	cin >> x;

	int result = binarySearch(arr, 0, n - 1, x);
	cout << result << endl;

}





