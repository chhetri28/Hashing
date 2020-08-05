#include<bits/stdc++.h>
using namespace std;
int longestsub(int *a,int n){
    unordered_map<int,int>m;
    int pre=0;// for prefix sum
    int len=0;
    for(int i=0;i<n;i++){
        pre+=a[i];// add 1 by 1 all the element
        if(pre==0){// check if any element is 0
            len=max(len,i+1);// update the index
        }
        if(m.find(pre)!=m.end()){//if any element is already present then use older value
            len=max(len,i-m[pre]);
        }
        else{
            m[pre]=i;// update the index
        }
    }
    return len;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<longestsub(a,n)<<endl;
}