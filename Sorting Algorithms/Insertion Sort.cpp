// TC -> O(N^2)
// SC -> O(1)

// Tutorial -> https://www.youtube.com/watch?v=wWhAhp6PIuQ

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++)
	{
		int current_val = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > current_val)
		{	//swap
			arr[j+1]=arr[j];
			j--;
		}
		arr[j + 1] = current_val;
	}
}

int main() {

  // your code goes here
	int arr[] = {13, 46, 24, 52, 20, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	InsertionSort(arr, n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}

//OUTPUT

9 13 20 24 46 52 











