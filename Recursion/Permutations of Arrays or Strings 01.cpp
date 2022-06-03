//APPROACH 01 -- OPTIMAL SOLUTION
class Solution {
    private:
	void recurPermute(vector<int> &ds,vector<int> &nums,vector<vector<int>> &ans , int freq[]){
	if(ds.size()==nums.size()){ //base case
	ans.push_back(ds);
	return;
	}

	for(int i =0;i<nums.size();i++){
		if(!freq[i]){
		ds.push_back(nums[i]);
		freq[i]=1; // mark the  map array
		recurPermute(ds,nums,ans,freq);
		freq[i]=0; // unmark the map array 
		ds.pop_back(); // pop back the element
		}
	}
}
    
public:
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
	vector<int> ds;
	int freq[nums.size()]; //frequency map array initialized size 0
	for(int i=0;i<nums.size();i++) freq[i]=0;
	recurPermute(ds,nums,ans,freq);
        return ans;
    }
};
