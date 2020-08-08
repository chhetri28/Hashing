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
int main(){
    OJ;
    FIO;
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>mp;
    int c(0);
    for(int i=0;i<k;i++){
        if(mp[a[i]]==0){
            c++;
        }
        mp[a[i]]++;
    }
    //cout<<c<<endl;  
    cout<<mp.size()<<endl;
    for(int i=k;i<n;i++){
        if(mp[a[i-k]]==1){
            c--;
        }
        mp[a[i-k]]-=1;
        if(mp[a[i]]==0){
            c++;
        }
        mp[a[i]]+=1;
        cout<<c<<endl;
    }
}