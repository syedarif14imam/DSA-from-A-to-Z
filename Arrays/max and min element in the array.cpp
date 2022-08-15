#include <iostream>
using namespace std;

int main()
{
    int n; //size of array
    cin >> n;
    
    int arr[n];
  
    for(int i=0;i<n;i++){
      cin >> arr[i];
    }

   int max = arr[0], min =arr[0];
   for(int i=0;i<n;i++){
      if(max < arr[i])
        max = arr[i];
      if(min > arr[i])
        min = arr[i];
    
    cout << max << " " <<min;  
    
  return 0;
}

//Input 1
4
1 13 10 21
//Output 1
21 1

