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

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first > b.first;
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        vector <int> a, v; 

        for(int i = 0; i < n; i++){
            int x,y; 
            cin>>x>>y; 
            a.pub(x); 
            v.pub(y);
        }


        ll ans  = 0; 

        for(int i = 0; i < n-1; i++){
            for(int j  = i+1; j < n; j++){
                ll cal = (a[i] * v[j]) + (v[i] * a[j]);
                ans = max(ans, cal);
            }
        }

        cout << ans << endl; 
        
    }
    return 0; 
}