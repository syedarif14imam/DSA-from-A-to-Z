/* TC -> O(N^2)
   SC -> O(1)
*/

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
      {
				int temp = arr[j];
				arr [j] = arr [j + 1];
				arr [j + 1] = temp;
			}
		}
  }
}

int main() {
  
	int arr[] = {13, 46, 24, 52, 20, 9};
	int n = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, n);
  
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;

}












