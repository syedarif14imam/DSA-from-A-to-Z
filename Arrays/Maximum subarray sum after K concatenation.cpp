/*  OPTIMAL APPROACH (1) ->       LEETCODE-https://leetcode.com/problems/k-concatenation-maximum-sum/

    **LOGIC**
    
    if(k==1) -> perform kadane's
    if(arrSum<0) -> perform kadane's on first two copies(k=2).
    if(arrSum>0) -> perform kadane's on first two copies(k=2) + (k-2)*arrSum. 
    
   
    Time Complexity: O(N)
    Space Complexity: O(1)

    where 'N' is the size of vector/list 'ARR'.
*/


class Solution {
public:
    long long kadane(vector<int> &arr, int k){
    
    long long M=1e9+7;
    long long maxSum = 0;
    long long curSum = 0; 
    
  
    for (int i = 0; i < arr.size() * k; i++) 
    { 
        curSum += arr[i % arr.size()];   
        maxSum = max(maxSum, curSum);  
        if (curSum < 0)
        {
            curSum = 0;
        } 
    } 

    return maxSum;
}
    
    int kConcatenationMaxSum(vector<int>& arr, int k) {
    long long maxSubSum;
        long long M = 1e9+7;
    
    if (k == 1)
    {
        maxSubSum = kadane(arr, k);

        return maxSubSum%M;
    }

    int arrSum = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        arrSum += arr[i];
    }

    if (arrSum < 0)
    {   
        // Finding the maximum subarray sum for k = 2.
        maxSubSum = kadane(arr, 2)%M;   
    }
    else
    {
        // Finding the maximum subarray sum for k = 2.
        maxSubSum = kadane(arr, 2)%M;
        maxSubSum += (long long)(k - 2)%M * (long long)arrSum%M;
    } 

    return (maxSubSum+M)%M;
    }
};

/*OPTIMAL APPROACH (2)

    Time Complexity: O(N)
    Space Complexity: O(1)
*/

class Solution {
public:
    int kConcatenationMaxSum(vector<int>& arr, int k) {
        long long M =1e9+7;
        
        if(k==1)return (kadanes(arr)%M);
        long sum =0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        
        if(sum<0) return (kadanesFirstTwo(arr)%M);
        else if(arr.size()==0) return 0;
        else{
            return kadanesFirstTwo(arr)%M + ((k-2)*sum)%M;
        }
    }
    
    private: long long kadanes(vector<int> &arr){
    
    long long M =1e9+7;
    long long maxSum = 0;
    long long curSum = 0; 
    for (int i = 0; i<arr.size(); i++) 
    { 
        curSum += arr[i];   
        maxSum = max(maxSum, curSum);  
        if (curSum < 0)
        {
            curSum = 0;
        } 
    } 
    return (maxSum+M)%M;
}
    private: long long kadanesFirstTwo(vector<int> &arr){
    long long M =1e9+7;
    long long maxSum = 0;
    long long curSum = 0; 
    for (int i = 0; i<2*arr.size(); i++) 
    { 
        curSum += arr[i%arr.size()];   
        maxSum = max(maxSum, curSum);  
        if (curSum < 0)
        {
            curSum = 0;
        } 
    } 
    return (maxSum+M)%M;
}
    
};
    
