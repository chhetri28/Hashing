#include<bits/stdc++.h>
using namespace std;

typedef vector <int> vi;
typedef pair< int ,int > pii;
#define endl "\n"
#define sd(val) scanf("%d",&val)
#define ss(val) scanf("%s",&val)
#define sl(val) scanf("%lld",&val)
#define debug(val) printf("check%d\n",val)
#define all(v) v.begin(),v.end()
#define PB push_back
#define MP make_pair
#define FF first
#define SS second
#define ll long long
#define MOD 1000000007
#define clr(val) memset(val,0,sizeof(val))
#define what_is(x) cerr << #x << " is " << x << endl; 
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int longestsub(int *a,int n){
    for(int i=0;i<n;i++){
        if(a[i]==0){
            a[i]=-1;
        }
    }
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
    OJ;
    FIO;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<longestsub(a,n)<<endl;
}