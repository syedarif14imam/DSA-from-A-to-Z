/*
if x is present in arr[] then returns the count
of occurrences of x, otherwise returns 0. 

Input: arr[] = {1, 1, 2, 2, 2, 2, 3,},   x = 2
Output: 4 // x (or 2) occurs 4 times in arr[]

//LOGIC => Take out the first and last occurene of the element and thn do this operation -> (last - first + 1) for count.

Time Complexity :-> O(logn)
Space Complexity :-> O(1)
*/


#include <bits/stdc++.h>
using namespace std;

// first occurence of element
int first(int arr[], int n, int x)
{
	int start = 0;
	int end = n - 1;
	int res = -1;
	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (x == arr[mid]) {
			res = mid;
			end = mid - 1;
		}
		else if (x < arr[mid])
			end = mid - 1;
		else
			start = mid + 1;
	}
	return res;
}

// last occurence of element
int last(int arr[], int n, int x) {
	int start = 0;
	int end = n - 1;
	int res = -1;
	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (x == arr[mid]) {
			res = mid;
			start = mid + 1;
		}
		else if (x < arr[mid])
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

	int x;
	cin >> x;

	int f = first(arr, n, x);
	int l = last(arr, n, x);

	if (f == -1 && l == -1)
		cout << 0 ;
	else
		cout << l - f + 1 << endl;
}






