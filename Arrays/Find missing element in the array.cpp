Solution 1: Using HASHING

// Time Complexity:  O(N)
// Space Complexity: O(N) (As we are making new substitute array)

int missingNumber(vector<int>& nums) {
    int n = nums.size() + 1;

    vector<int> substitute(n, 0); // initializing the substitute array with 0 of size n+1.

    int ans;                      // initializing the answer  array .
    
 
    for (int i = 0; i < nums.size(); i++)
    {
        substitute[nums[i]]++; //visit to the number index and increase by 1 (eg if 4 is found in 0th index of nums visit 4th index of substitute array and increment preassigned 0 by 1)
    }

    for (int i = 0; i <= nums.size(); i++)
    {
        if (substitute[i] == 0)
        {
            ans = i;
        }
    }
    return ans;
    }
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------   
Solution 2: Using Maths  // logic ->  (sum of n elements - sum of array ) to get missing number

// Time Complexity: O(N) 
// Space Complexity: O(1) As we are NOT USING EXTRA SPACE

int missingNumber(vector<int>& nums) {
        long long int len = nums.size();
        
        long long int sum_of_n = len*(len+1)/2;
        
        long long int sum_of_arr = 0;
            
        for(int i=0;i<len;i++)
        {
            sum_of_arr += nums[i];
        }
        
        long long int ans = sum_of_n - sum_of_arr;
        
        return ans;
    }
-----------------------------------------------------------------------------------------------------------------------------------------------------------------------
Solution 3: XOR Operation // logic -> (xor of all natural no.s from 0 to n) ^ (xor of all elements of array)  -> NO OVERFLOW IN THIS SOLN
  
  //Time Complexity:  O(N) 
 //Space Complexity: O(1) As we are NOT USING EXTRA SPACE
 
  int missingNumber(vector<int>& nums) {
        int n = nums.size();
        
        int x1 = nums[0]; 
        int x2 = 0;
        
        // xor of all elements of array
        for(int i=1;i<n;i++){
            x1= x1 ^ nums[i];
        }
        
        // xor of all natural no.s from 0 to n
        for(int i=1;i<=n;i++){
            x2 = x2 ^ i;
        }
        
        return (x1^x2);
     }
