// 1st method using header file

#include <iostream>
#include<math.h>
using namespace std;

int main()
{
   int n;
   cin >> n;
   
   // compute no. of digits
   int d=0, temp=n;
   while(temp){
       d++;
       temp=temp/10;
   }
   // compute the ans 
   int ans = 0;
   while(n){
       int r = n%10;
       ans += r* pow(10,d-1);   // decreement d (no of digits)
       d--;
       n/=10;
   }
   cout << ans ;
  return 0;
}

// 2nd without using header file

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >>n;

    // compute no. of digits
    int d=0, temp=n, p=1;
    while(temp) {
        d++;
        temp=temp/10;
        p*=10;
    }
    p/=10;
    // compute the ans
    int ans = 0;
    while(n) {
        int r = n%10;
        ans += r*p; // decrement d (no of digits)
        n/=10;
        p/=10;
    }

   // 3rd and easiest way 
   
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int ans =0;
    
    //extract last digit and then multiply it by 10 and add remainder for 2345
   
        // 5 -> 5 *10+4 -> 54*10+3 -> 543*10+2
    
    while(n){
         int r = n  % 10;
        ans = ans *10 + r;
        n/=10;
    }
    cout << ans;
    return 0;
}

    cout << ans ;
    return 0;
}
