// TC-> O(n)
// SC-> O(1)

class Solution {
public:
    
    //reverse function
    void reverse(vector<int> &num,int start,int end){
        while(start<end){
            swap(num[start],num[end]);
            start++;
            end--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k%=n; //k should always be less than n
        
        reverse(nums,0,n-k-1); //rotation towards left(clockwise) -> [USING SAME LOGIC ANTI-CLOCKWISE (towards right) ROTATION CAN BE DONE]
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
        
         
    }
};

//INPUT
[1,2,3,4,5,6]
K=2
[-1,-100,3,99]
K=2
//OUTPUT
[5,6,1,2,3,4]
[3,99,-1,-100]
