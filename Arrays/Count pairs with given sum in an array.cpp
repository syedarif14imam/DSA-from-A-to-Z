#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int arr[n];
  
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  
  int sum;
  cin >> sum;
  int count =0;
  
  for(int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      if(arr[i]+arr[j]==sum)
        count++;
  count <<"Count of pairs is" << count;
  
  return 0;
  
  //Input
  5
  1 1 2 2 3
  3
  //Output
  Count of pairs is 4
  
