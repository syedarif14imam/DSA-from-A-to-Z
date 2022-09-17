#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {

	char k;
	for(int i=1;i<=5;i++){
		k=70-i;
		for(int j=1;j<=5;j++){
			if(j<=i)
			{
				cout<<k;
				k++;
	
				
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

OUTPUT->
  
E    
DE   
CDE  
BCDE 
ABCDE
