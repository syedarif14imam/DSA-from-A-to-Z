// Search an element in sorted and rotated
// array using single pass of Binary Search

// Time Complexity: O(log n). 
// Space Complexity: O(1).


#include <bits/stdc++.h>
using namespace std;
 
// Returns index of key in arr[l..h] if
// key is present, otherwise returns -1
int search(int arr[], int l, int h, int key)
{
    if (l > h)
        return -1;
 
    int mid = (l + h) / 2;
    if (arr[mid] == key)
        return mid;
 
    /* If arr[l...mid] is sorted */
    if (arr[l] <= arr[mid]) {
        /* As this subarray is sorted, we can quickly
        check if key lies in half or other half */
        if (key >= arr[l] && key <= arr[mid])
            return search(arr, l, mid - 1, key);
        /*If key not lies in first half subarray,
           Divide other half  into two subarrays,
           such that we can quickly check if key lies
           in other half */
        return search(arr, mid + 1, h, key);
    }
 
    /* If arr[l..mid] first subarray is not sorted, then
    arr[mid... h] must be sorted subarray */
    if (key >= arr[mid] && key <= arr[h])
        return search(arr, mid + 1, h, key);
 
    return search(arr, l, mid - 1, key);
}


int main()
{
    int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int i = search(arr, 0, n - 1, key);
 
    if (i != -1)
        cout << "Index: " << i << endl;
    else
        cout << "Key not found";
} 

// O/P -> Index: 8
 

//CLEANER CODE 
int search(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        
        while(start<=end)
        {
            int mid = start + (end-start)/2;
            
            if(nums[mid]==target)
                return mid;
            
            if(nums[start]<=nums[mid])
            {
                if(nums[start]<=target && nums[mid]>=target)
                    end = mid-1;
                else
                    start =mid+1;
            }
            else
            { 
                if(nums[mid]<=target && nums[end]>=target)
                    start = mid+1;
                else
                    end = mid-1;
            }
        }
        return -1;
    }
