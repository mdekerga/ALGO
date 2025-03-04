#include <bits/stdc++.h>
using namespace std;

int search(vector<int>& nums, int target) {
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