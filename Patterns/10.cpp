#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	// Your code goes here;
	int k=0;int rows;
  cin >> rows;
	for(int i=1;i<=rows;i++){
        if(rows%2==0)//when rows are even
        {
            if(i<=rows/2) k++;
            if(i>rows/2 +1) k--;
        }
        else
        {
            i<=(rows+1)/2?k++:k--;//when rows are odd
        }
		
		for(int j=1;j<=(rows+1)/2;j++){
			if(j<=k){
				cout << "*";
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}

OUTPUT->
  rows = 9
*    
**   
***  
**** 
*****
**** 
***  
**   
* 
