#include <iostream>
using namespace std;

int search(int arr[],int n,int x)
{

     for(int i=0;i<n;i++)
         if(arr[i]==x)
            return i;
     return -1;

}
int main()
{
    int n; //size of array
    cin >> n;
    
    int arr[n];
  
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }

    int x;//element to be searched
    int result = sesrch(arr,10,x);
  
    if(result==-1)
      cout << "Not present";
    else
      cout << "Present at index" << result;
    
  return 0;
}

//Input 1
3
1 2 10
10
//Output 1
Present at index 2
 
//Input 2
6
34 65 22 14 25 89 
10
//Output 2
Not present

  
