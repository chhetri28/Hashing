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
    //OJ;
    FIO;
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vi a(n),b(m);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<m;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;//Build of map of 1st array with each element count
        }
        //Scan a 2nd array lookup in map & print that element by its count
        for(int i=0;i<m;i++){
            if(mp[b[i]]!=0){
                for(int j=0;j<mp[b[i]];j++){
                    cout<<b[i]<<" ";
                }
                mp[b[i]]=-1;
            }
        }
        //raverse through remaining elements of the map & print them as per their count too
        for(auto i=mp.begin();i!=mp.end();i++){
            if(i->second>0){
                for(int j=0;j<i->second;j++){
                    cout<<i->first<<" "; 
                }
            }
        }
        cout<<endl;
    }
}