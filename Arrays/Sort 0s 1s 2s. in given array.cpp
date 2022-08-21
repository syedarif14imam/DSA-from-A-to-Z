/* DUTCH NATIONAL FLAG ALGORITHM IS USED 

LEETCODE -> https://leetcode.com/problems/sort-colors/

  TC -> O(N)
  SC -> O(1)
*/

class Solution {
public:
    void sortColors(vector<int>& nums) {
    
    int lo=0;
    int high=nums.size()-1;
    int mid=0;
    
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[lo++],nums[mid++]);
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high--]);
        }
    }
    }
};
