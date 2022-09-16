#include<bits/stdc++.h>
using namespace std;
int main() {

// your code goes here
	int k = 0, rows, n;

	cin >> rows;
	n = (rows + 1) / 2;

	for (int i = 1; i <= rows; i++) {
		if (rows % 2 == 0)//when rows are even
		{
			if (i <= n) k++;
			if (i > n + 1) k--;

		}
		else
		{
			i <= n ? k++ : k--;//when rows are odd
		}

		for (int j = 1; j <= rows; j++)
		{
			if (j >= n + 1 - k && j <= n - 1 + k)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}

OUTPUT->
  
    *     
   ***    
  *****   
 *******  
********* 
********* 
 *******  
  *****   
   ***    
    * 





