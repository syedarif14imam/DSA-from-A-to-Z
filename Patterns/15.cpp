#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int n = 5;
	char k;
	for(int i=1;i<=n;i++){
		k='A';
		for(int j=1;j<=n;j++){
			if(j<=6-i)
			{
				cout<<k<<" ";
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
  
A B C D E 
A B C D  
A B C   
A B    
A   
