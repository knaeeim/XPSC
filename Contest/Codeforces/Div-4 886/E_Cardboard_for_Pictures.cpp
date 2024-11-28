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


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        ll n, c;
        cin>>n>>c;

        vi v(n); 

        for(int i = 0; i < n; i++)cin>>v[i]; 

        auto possible = [&](ll w)->ll{
            ll total = 0; 
            for(int i =0; i < n; i++){
                ll side = (2 * w) + v[i];
                ll area = side * side; 
                total += area;
                if(total > c) return false;
            }
            return true;
        }; 

        ll left = 0, right = 1e10, ans = 0; 

        while(left <= right){
            ll mid = left + ( right - left ) / 2; 

            if(possible(mid)){
                ans = mid;
                left = mid + 1;
            }
            else right = mid - 1; 
        }

        cout<<ans<<endl;
    }
    return 0; 
}