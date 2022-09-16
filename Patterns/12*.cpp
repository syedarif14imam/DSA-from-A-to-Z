#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int k,rows;
	cin >> rows;
	for(int i=1;i<=rows;i++){
		k=1;
		for(int j=1;j<=2*rows;j++){
			if(j<=i||j>=(2*rows+1)-i)
			{
				cout << k;
				if(j<rows)k++;//increasing condition
				if(j>rows)k--;//decreasing condition
				
			}else
			{
				cout << " ";
				if(j==rows+1){ // decrement once at midpoint where no. starts decreasing so that extra increment gets balanced 
					k--;
				}
			}
			
			}
			cout << endl;
		}
	return 0;
}

OUTPUT->
	rows=4
	
	1      1
	12    21
	123  321
	12344321
