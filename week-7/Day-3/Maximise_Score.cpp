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
        int n; cin>>n; 

        vi v(n); 

        for(int i = 0; i < n; i++){
            cin>>v[i];
        }

        vi ans;
        ans.push_back(abs(v[0] - v[1]));
        ans.push_back(abs(v[n - 1] - v[n - 2]));

        for(int i = 1; i < n-2; i++){
            int diff1 = abs(v[i+1] - v[i]);
            int diff2 = abs(v[i] - v[i-1]);
            ans.push_back(max(diff1, diff2));
        }

        sorta(ans); 

        cout<<ans[0]<<endl;
    }
    return 0; 
}