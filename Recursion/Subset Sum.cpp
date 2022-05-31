class Solution {
    public:
        void func{int ind,int sum, vector<int>&arr,int N,vector<int>&sumSubset){

            //base case
            if(ind==N){
            	sumSubset.push_back(sum);
            	return;
            }
            //pick an element
            func(ind+1,sum+arr[ind],arr,N,sumSubset);

            //do-not pick an element
            func(ind+1,sum,arr,N,sumSubset);
        }
            
public:
    vector<int> subsetSums(vector<int> arr, int N) {
        vector<int> sumSubset;
        func(0,0,arr,N,sumSubset);
        sort()
        
        return ans;
    }
};
