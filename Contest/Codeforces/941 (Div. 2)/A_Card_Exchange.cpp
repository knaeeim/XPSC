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
        map<int, int> mp; 
        for(int i = 0; i < n; i++){
            cin>>v[i]; 
            mp[v[i]]++;
        }

        bool ache = false;

        for(auto el: mp){
            if(el.second >= k){
                ache = true; 
                break;
            }
        }

        if(ache) cout<<k-1<<endl;
        else cout<<n<<endl;
    }
    return 0; 
}