#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	int k;
	for(int i=1;i<=4;i++){
		k=1;
		for(int j=1;j<=8;j++){
      if(j<=i||j>=9-i)
      {
				cout << k;
				if(j<4)k++;//increasing condition
				if(j>4)k--;//decreasing condition
				}
      else
      {
				cout << " ";
				if(j==5){ // decrement once at midpoint where no. starts decreasing so that extra increment gets balanced 
					k--;
				}
			}
			
			}
			cout << endl;
		}
	return 0;
}

OUTPUT->
  
1      1
12    21
123  321
12344321
