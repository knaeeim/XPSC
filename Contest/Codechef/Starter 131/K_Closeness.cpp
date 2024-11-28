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
        int n, k; 
        cin>>n>>k; 

        vi v(n); 
        int mx = INT_MIN; 
        
        for(int i = 0; i < n; i++){
            cin>>v[i]; 
            mx = max(mx, v[i]); 
        } 

        for(int i = 0; i < n; i++){
            v[i] += ((mx - v[i])/k) * k; 
        }

        sorta(v);

        int ans = v[n-1] - v[0]; 

        for(int i = 0; i < n -1 ; i++){
            ans = min(ans, ((v[i] + k) - v[i+1]));
        }

        cout<<ans<<endl;

    }
    return 0; 
}