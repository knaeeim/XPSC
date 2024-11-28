#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";

const int mod = 1e9 + 7; 


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        ll n; 
        cin>>n; 

        vll v(n); 
        for(int i=0; i<n; i++) cin>>v[i]; 

        sorta(v); 

        ll sum = v[0]; 

        for(ll i=1; i<n; i++){
            if(v[i] <= 1 or sum <= 1) sum = (sum + v[i]) % mod; 
            else{
                sum = (sum * v[i]) % mod;
            }
        }

        cout<<sum<<endl;
    }
    return 0; 
}