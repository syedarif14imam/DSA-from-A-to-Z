  /* 
  
   TC -> Best Case / Average Case : O(nLogn)
         Worst Case : O(n^2)
           
   SC -> Average Case : O(Logn)
         Worst Case : O(n) 
   */      

#include <bits/stdc++.h>
using namespace std;

// Partition Function
int Partition(int arr[], int low, int high) {
  
	int pivot = arr[high];
	int partitionIndex = low;//set partition index initially as zero
  
	for (int i = low; i < high; i++) {
		if (arr[i] <= pivot) {
			swap(arr[i], arr[partitionIndex]);// swap if element is lesser than pivot
			partitionIndex++;
		}
	}
	swap(arr[partitionIndex], arr[high]);//swap pivot with element at partition index
	return partitionIndex;
}

//QuickSort Function
void QuickSort(int arr[], int low, int high) { 
	if (low < high) {
		int partitionIndex = Partition(arr, low, high);//calling partition
		QuickSort(arr, low, partitionIndex - 1);
		QuickSort(arr, partitionIndex + 1, high);
	}
}

//print Array Function
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " " ;
	}
	cout << endl;
}


int main() {

	// your code goes here
	int arr[] = {4, 6, 2, 5, 7, 8, 1, 3};
	int n = sizeof(arr) / sizeof(arr[0]);
	QuickSort(arr, 0, n - 1);
	printArray(arr, n);
	return 0;

}

//OUTPUT 

1 2 3 4 5 6 7 8 












