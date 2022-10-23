// TC -> O(nlogn)
// SC -> O(n)
// AS -> O(n)


#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int mid , int r) {

	int i = l;         // starting index of left half of arr
	int j = mid + 1;   // starting index of right half of arr
	int f = l;         // index used to transfer elements in temporary array
	int temp[100000];  // temporary array

  //storing elements in the temporary array in a sorted manner//
  
	while (i <= mid && j <= r) {
		if (arr[i] < arr[j]) {
			temp[f] = arr[i];
			f++, i++;
		} 
         else {
			temp[f] = arr[j];
			f++, j++;
		}
	}
  
	// the left array has bee fully exhausted

	if (i > mid) { 
		while (j <= r) {
			temp[f] = arr[j];
			f++, j++;
		}
	}
	else {
	// the right array has been fully exhausted
		while (i <= mid) {
			temp[f] = arr[i];
			f++; i++;
		}
	}

  // transfering all elements from temporary to arr //
	for (int f = l; f <= r; f++) {
		arr[f] = temp[f];
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		int mid = (l + r) / 2;
		mergeSort(arr, l, mid);     // left half
		mergeSort(arr, mid + 1, r); // right half
		merge(arr, l, mid, r);      // merging sorted halves
	}
}

int main() {

  // your code goes here
	int arr[] = {5, 4, 6, 3, 2, 1};
	int n = 6;
	mergeSort(arr, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}












