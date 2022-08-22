/* TC -> O(N^2)
   SC -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[], int n) {
	for (int i = 0; i < n - 1; i++) // we need to do n-2 passes
	{
		int iMin = i; //ith position : elememsy from i to n-1 are candidates
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[iMin]) 
      {
				iMin = j;// update the index of minimun element
			}
		}
		int temp = arr[i];
		arr[i] = arr[iMin];
		arr[iMin] = temp;
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	// your code goes here
	int arr[] = {2, 6, 4, 1, 5, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	SelectionSort(arr, n);
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << " ";
	}
}

// OUTPUT 
1 2 3 4 5 6














