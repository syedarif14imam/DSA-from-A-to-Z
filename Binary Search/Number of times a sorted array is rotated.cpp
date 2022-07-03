/* Consider an array arr of distinct numbers sorted in increasing order.
   Given that this array has been rotated (clockwise) k number of times. Given such an array, find the value of k.

Input: arr[] = {15, 18, 2, 3, 6, 12}
Output: 2
Explanation: Initial array must be {2, 3, 6, 12, 15, 18}. We get the given array after rotating the initial array twice.

Input: arr[] = {7, 9, 11, 12, 5}
Output: 4

Input: arr[] = {7, 9, 11, 12, 15}
Output: 0

      T.C -> O(log n)
      S.C -> 0(1)
*/

#include <bits/stdc++.h>
using namespace std;

// Returns count of rotations
// for an array which is first sorted
// in ascending order, then rotated

#include <bits/stdc++.h>
using namespace std;

// Returns count of rotations
// for an array which is first sorted
// in ascending order, then rotated

// Observation: We have to return
// index of the smallest element
int countRotations(int arr[], int n)
{
	int low = 0, high = n - 1;
	while (low <= high) {

		// if first element is mid or
		// last element is mid
		// then simply use modulo so it
		// never goes out of bound.
		int mid = low + (high - low) / 2;
		int prev = (mid - 1 + n) % n;
		int next = (mid + 1) % n;

		if (arr[mid] <= arr[prev]
			&& arr[mid] <= arr[next])
			return mid;
		else if (arr[mid] <= arr[high])
			high = mid - 1;
		else if (arr[mid] >= arr[low])
			low = mid + 1;
	}
	return 0;
}

int main()
{
	int n ;
	cin >> n;

	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << countRotations(arr, n) << endl;
	return 0;
}



