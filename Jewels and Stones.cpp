/*
You're given strings J representing the types of stones that are jewels, and S representing the stones you have.  Each character in S is a type of stone you have.  You want to know how many of the stones you have are also jewels.

The letters in J are guaranteed distinct, and all characters in J and S are letters. Letters are case sensitive, so "a" is considered a different type of stone from "A".

Example 1:

Input: J = "aA", S = "aAAbbbb"
Output: 3

Example 2:

Input: J = "z", S = "ZZ"
Output: 0
*/
//naive approach O(n2)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int c=0;
        for(int i=0;i<J.size();i++){
            for(int j=0;j<S.size();j++){
                if(J[i]==S[j] ){
                    c++;
                }
            }
        }
        return c;
    }
};
//better approach o(n);
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int res=0;
        unordered_set<char>s(J.begin(),J.end());
        for(auto x:S){
            if(s.count(x))res++;
        }
        return res;
    }
};