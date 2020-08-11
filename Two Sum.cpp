/*

1. Two Sum
Easy

Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].



*/

// my approach O(n);
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(target-nums[i]==nums[j]){
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};
//Better approach using hashmap O(n);
class Solution {
public:
    vector<int> twoSum(vector<int>& n, int target) {
        unordered_map<int,int>mp;// take a map
        vector<int>res;// and resultant array
        for(int i=0;i<n.size();i++){// loop till n.size()
            int no=target-n[i];// store the number to be searched in no
            if(mp.find(no)!=mp.end()){// if(found)
                res.push_back(mp[no]+1);//push index of the number in res array
                res.push_back(i+1);
                return res;
            }
            mp[n[i]]=i;
        }
        return res;
    }
};