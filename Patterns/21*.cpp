#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=4;j++){
      
			if(i==1||i==5||j==1||j==4)//condition
			{
				cout<<"*";
			}
			else
			{
				cout <<" ";
			}
		}
		cout << endl;
	}
	return 0;
}

OUTPUT->
  
****
*  *
*  *
*  *
****
