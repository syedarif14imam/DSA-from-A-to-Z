#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n, i;
	cin >> n;

	int arr[n];

	for (i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int x;
	cin >> x;

	for (i = n - 1 ; i > 0; i--) {
		if (arr[i] == x) {
			cout << i << endl;
			break;
		}
	}

  //if element not found
	if (arr[i]!=x) {
		cout << -1;
	}
    
    

    return 0;
}
