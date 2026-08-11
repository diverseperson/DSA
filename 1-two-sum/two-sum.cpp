#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            // int num=nums[i];
            int moreNeeded=target - nums[i];
            if(mpp.find(moreNeeded)!= mpp.end())
            {
                return {mpp[moreNeeded],i}; //uska value and index
            }
            mpp[nums[i]] = i;
        }
        // return {-1,-1}; OR
        return {};
         

    }
};