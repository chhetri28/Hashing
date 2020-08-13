/*
Given an array of integers nums.

A pair (i,j) is called good if nums[i] == nums[j] and i < j.

Return the number of good pairs.

*/
// Naive apporach o(n^2)
/*
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int p=0;
        for(int i=0;i<nums.size();i++){
           for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j] and i<j){
                p++;
            }
           }
        }
    return p;
    }
};
*/
// Better apporach o(n)

/*
We can just count each value. Then, n elements with the same value can form n * (n - 1) / 2 pairs.

Why? The first element forms n - 1 pairs, the second - n - 2 pairs and so on. So the sum of the [1, n - 1] progression is n * (n - 1) / 2.

E.g. {1,1,1,1,1} Their will be (4+3+2+1) = (4+1)*4/2 = 10 pairs. Therefore, we can add (count-1)*count/2.

*/

/*
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int c[101]={};
        int res=0;
        for(auto x:nums){
            c[x]++;
        }
        for(int i=0;i<=100;i++){
            res+=c[i]*(c[i]-1)/2;
        }
        return res;
    }
};
*/