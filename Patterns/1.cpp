  //https://takeuforward.org/strivers-a2z-dsa-course/must-do-pattern-problems-before-starting-dsa/

#include<iostream>
using namespace std;
int main()
{
  int n;
	cin >> n;
  
	for(int i=1;i<=n;i++)
  {
		for (int j = 1; j <= n; j++) 
    {
			cout << "*" ;
		}
		cout << '\n';
	}
	return 0;
}

OUTPUT ->
 
  N = 5
*****
*****
*****
*****
*****
