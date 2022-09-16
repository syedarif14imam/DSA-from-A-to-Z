#include <algorithm>
#include <iostream>
using namespace std;

int main() {
	int rows;
	cin >> rows;
	for(int i=1;i<=rows;i++){
		for(int j=i;j>=1;j--){
				cout << j%2 << " ";
			}
			cout << endl;
		}
	return 0;
}

OUTPUT->
  
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
