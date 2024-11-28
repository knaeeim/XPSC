#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

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


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); 
    

    ll t; cin>>t; 

    while(t--){
        ll n; cin>>n;

        vll a(n), b(n+1); 

        for(int i = 0; i < n; i++) cin>>a[i]; 
        for(int i = 0; i < n+1; i++) cin>>b[i]; 

        ll count  = 0;
        bool paichi123 = false;
        ll last = b[n];
        ll diff = INT_MAX;
        for(int i = 0; i < n; i++){

            if(paichi123 != true){
                ll mx = max(a[i], b[i]); 
                ll mn = min(a[i], b[i]);
                if(last >= mn and last <= mx){
                    paichi123 = true;
                }
            }

            count += abs(a[i] - b[i]);
            diff = min(diff, abs(a[i] - last));
            if(a[i] > b[i]){
                a[i] -= abs(a[i] - b[i]);
            }
            else{
                a[i] += abs(a[i] - b[i]);
            }
        }

        if(paichi123){
            cout << count + 1 << endl; 
        }
        else{
            for(int i = 0; i < n; i++){
              diff = min(diff, abs(a[i] - last));  
            }
            cout << count + (diff + 1) << endl;
        }

    }
    return 0; 
}