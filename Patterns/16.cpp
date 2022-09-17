#include <algorithm>
#include <iostream>

using namespace std;

int main() {
	
	int n = 5;
	char k ='@';
	for(int i=1;i<=n;i++){
		k++;
		for(int j=1;j<=n;j++){
			if(j<=i)
			{
				cout<<k<<" ";
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
  
A     
B B    
C C C   
D D D D  
E E E E E 
