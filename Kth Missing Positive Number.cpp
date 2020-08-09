/*
Given an array arr of positive integers sorted in a strictly increasing order, and an integer k.

Find the kth positive integer that is missing from this array.

Example 1:

Input: arr = [2,3,4,7,11], k = 5
Output: 9
Explanation: The missing positive integers are [1,5,6,8,9,10,12,13,...]. The 5th missing positive integer is 9.

Example 2:

Input: arr = [1,2,3,4], k = 2
Output: 6
Explanation: The missing positive integers are [5,6,7,...]. The 2nd missing positive integer is 6.

*/
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int>s;//make a set
        for(auto x:arr){
            s.insert(x);//put all the elements form the arr to set
        }
        int i=1;
        while(k>0){// iterate util k>0
            if(s.find(i++)==s.end()){//find the element in set
                k--;// if(not found) deacrease k and insrease i by 1;
            }
        }
      return i-1;// return i-1;
      /*
      arr = [1,2,3,4], k = 2
      in set =1,2,3,4 i=1; search for 1 found leave the loop without doing anything
      i=5 search in set and so k=k-1(2-1)=1 and i=i+1;(6) and then k=1,i=7;
      return i-1=7-1=6
      */
    }
};