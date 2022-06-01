class Solution {
public:
    void findSubsets(int ind,vector<int> &nums, vector<int> &ds, vector<vector<int>> &ans){
    ans.push_back(ds);
    for(int i=ind;i<nums.size();i++){
        if(i!=ind && nums[i] == nums[i-1]) continue; // to avoid duplicates
        ds.push_back(nums[i]); // to push index elements into ds
        findSubsets(i+1,nums,ds,ans);
        ds.pop_back();
    }
}
    
    
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {// nums is the given array
    vector<vector<int>> ans; // to store all possible size arrays
    vector<int> ds;
    sort(nums.begin(),nums.end());// have to sort so that duplicates will be together
    findSubsets(0,nums,ds,ans);
    return ans; // ans array - the ulmiate answer
    }
};
