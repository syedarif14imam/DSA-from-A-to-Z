    // TC -> O(N)
    // SC -> O(1)

    // m is maximum of number zeroes allowed to flip
    // n is size of array
    
int findZeroes(int arr[], int n, int m) {
        // code here
        int maxconsecutiveones= 0;
        int start=0;
        int zerocount=0;
        
        for(int end=0;end<n;end++){
            if(arr[end]==0){
                zerocount++;
            }
            while(zerocount>m){
                if(arr[start]==0){
                    zerocount--;
                }
                start++;
            }
            maxconsecutiveones = max(maxconsecutiveones,end-start+1);
       }
        return maxconsecutiveones;
    }  
