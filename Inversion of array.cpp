//Inversion of array using stl
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define OJ \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

int main(){
    //OJ;
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(auto&i :a){
            cin>>i;
        }
        multiset<ll>s;//multiset
        ll c(0);
        multiset<ll>::iterator it1;
        for(ll i=0;i<n;i++){
            s.insert(a[i]);
            it1=s.upper_bound(a[i]);
            c+=distance(it1,s.end());
        }
        cout<<c<<endl;
    }
}