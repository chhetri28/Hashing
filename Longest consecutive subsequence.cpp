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
/*
Approach-I
int main(){
    OJ;
    FIO;
    int n;
    cin>>n;
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vi :: iterator ip;
    ip=std::unique(a.begin(),a.begin()+n);
    a.resize(std::distance(a.begin(),ip));
    int c(0);
    for(auto i=a.begin();i<a.end();i++){
        if(abs(*i-*(i+1))==1){
            c++;
        }
       // cout<<*i<<" ";
    }
   cout<<c;
}

*/
/*
Approach -II O(n) and O(1)space

int solve(int *a,int n){
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(s.find(a[i]-1)!=s.end()){
            continue;
        }else{
            int c(0);
            int x=a[i];
            while(s.find(x)!=s.end()){
                c++;
                x++;
            }
            ans=max(ans,c);
        }
    }
    return ans;
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
    cout<<solve(a,n)<<endl;
}

*/