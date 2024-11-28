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
    

    int t; cin>>t; 

    while(t--){
        int n, f, k; 
        cin>>n>>f>>k; 

        map<int, int> mp ; 
        vi v(n); 

        for(int i = 0; i < n; i++) {
            cin>>v[i];
            mp[v[i]]++;
        } 

        int cmp123 = v[f-1];

        sortd(v);

        if(mp[cmp123] > 1){
            int first = 0; 
            int last = 0; 

            for(int i = n-1; i >= 0; i--){
                if(v[i] == cmp123){
                    last = i+1;
                    break; 
                }
            }

            for(int i = 0; i < n; i++){
                if(v[i] == cmp123){
                    first = i+1;
                    break; 
                }
            }


            int mx1 = max(first, last); 
            int mn1 = min(first, last); 

            if(mx1 > k and mn1 > k) no; 
            else if(mx1 > k and mn1 <= k) cout << "MAYBE" << endl;
            else if(mx1 <= k and mn1 <= k) yes;
        }
        else{
            int first = 0;
            for(int i = 0; i < n; i++){
                if(v[i] == cmp123){
                    first = i+1;
                    break; 
                }
            }

            if(first > k) no; 
            else yes; 
        }


    }
    return 0; 
}