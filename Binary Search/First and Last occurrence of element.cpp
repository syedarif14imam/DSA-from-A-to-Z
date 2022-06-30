/*Given a sorted array with possibly duplicate elements, the task is to find indexes of first and last occurrences of an element x in the given array.
Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}    
        k = 5
Output : First Occurrence = 2
         Last Occurrence = 5 */


#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int k, int start, int end) {

	int res = -1;
	while (start <= end) {
		int mid = start + (end - start) / 2;

		// Check if k is present at mid
		if (k == arr[mid])
		{
			res = mid;
			//for finding first occurence
			end = mid - 1;
			//for finding last occurence
			// start = mid + 1;
		}

		else if (arr[mid] > k)
			end = mid - 1;

		else
			start = mid + 1;
	}
  return res;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

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






