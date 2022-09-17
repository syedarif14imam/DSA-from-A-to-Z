#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	
	int k=0;
	for(int i=1;i<=10;i++){
		if(i<=5)k++;// imp condition
		if(i>6)k--;// imp condition
		for(int j=1;j<=10;j++)
    {
			if(j<=6-k||j>=5+k)
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
  
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
