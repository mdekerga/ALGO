#include <bits/stdc++.h>
using namespace std;


//Recherche basique

int search(vector<int>& nums, int target){
    for(int i =0; i < nums.size();i++){
        if(nums[i] == target){
            return i;
        }
    } 
}




//Recherche binaire (fonctionne si tableau trié)
int binary_search(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;

        while(left <= right){
            int m = left + (right - left) / 2;
            if(nums[m] == target){
                return m;
            }else if(nums[m] > target){
                right = m-1;
            }else{
                left = m+1;
            }
        }
        return -1;
    }

    //Version récursive
int recursive_binary_search(vector<int>& nums,int low,int high,int target){
    if(high >= low){
        int mid = low + (high-low) / 2;

        if(nums[mid] == target){
            return mid;
        }

        if(nums[mid] < target){
            return recursive_binary_search(nums,mid+1,high,target);
        }

        return recursive_binary_search(nums,low,mid-1,target);
    }
}