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
    

    int n; cin>>n; 

    vi v(n); 

    for(int i=0; i<n; i++) cin>>v[i]; 

    int x; cin>>x; 

    int l =0, r = n-1; 
    int ans = -1; 

    while( l <= r){
        int mid = l + ( r - l)/2; 

        if(v[mid] == x){
            ans = mid;
            break; 
        }

        if(x < v[mid]) r = mid - 1;
        else l = mid + 1;
    }

    cout<<ans<<endl; 

    return 0; 
}