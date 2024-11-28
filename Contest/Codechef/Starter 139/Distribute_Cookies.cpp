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
        int n, m; 
        cin>>n>>m;

        if(m % n == 0){
            cout << 0 << endl;
            continue;
        }

        ll ans = INT_MAX; 

        ll temp = m; 

        while(temp){
            // cout << temp << endl; 
            if(temp % n == 0){
                ans = abs(m - temp);
                break;
            }
            temp++;
        }

        ll ans1 =  INT_MAX; 
        if(m > 1){
            temp = m; 
            while(temp){
                // cout << temp << endl; 
                if(temp % n == 0){
                    ans1 = abs(m - temp); 
                    break;
                }
                temp--;
            }
        }

        cout << min(ans, ans1) << endl; 

    }
    return 0; 
}