#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	char k;
	for(int i=1;i<=4;i++){
		k='A';
		for(int j=1;j<=7;j++){
			if(j>=5-i&&j<=3+i)
			{
				
				cout<<k;
				if(j<4)k++;//increment k 
				if(j>=4)k--;//decrement k
				
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
  ABA  
 ABCBA 
ABCDCBA
