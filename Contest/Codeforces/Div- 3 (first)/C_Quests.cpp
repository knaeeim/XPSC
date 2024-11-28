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
        
        vi a(n), prefix(n), b(n), maxb(n); 

        cin>>a[0]; 
        prefix[0] = a[0]; 

        for(int i = 1; i < n; i++){
            cin>>a[i]; 
            prefix[i] = a[i] + prefix[i-1];
        }

        cin>>b[0];
        maxb[0] = b[0]; 

        for(int i = 1; i < n; i++){
            cin>>b[i]; 
            maxb[i] = max(maxb[i-1], b[i]);
        } 

        k--; 
        int ans = INT_MIN; 

        for(int i = 0; i < n; i++){
            ans = max(ans, prefix[i] + (k - i) * maxb[i]);
            if(i == k) break;
        }

        cout<<ans<<endl; 
    }
    return 0; 
}