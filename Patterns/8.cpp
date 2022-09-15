#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=9;j++){
            if(j>=i&&j<=10-i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

OUTPUT->
  
*********
 ******* 
  *****  
   ***   
    *    
