#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    cin >> n;
    int arr[n];
  
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int start = 0;
    int end = n-1;
    int temp;
    
    //reversing array
    while(start<end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    //printing output
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }

    return 0;
}
