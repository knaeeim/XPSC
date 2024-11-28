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
        int n;
        cin>>n; 

        vector <pair<pair<int, int>, int>> v; 

        for(int i = 0; i < n; i++){
            int ai, bi; 
            cin>>ai>>bi; 
            if(ai <= 10){
                v.push_back({{ai, bi}, i}); 
            }
        }

        sort(v.begin(), v.end(), [&](pair<pair<int, int>, int> a, pair<pair<int, int>, int> b){
            return a.first.second > b.first.second;
        });

        for(auto el: v){
            cout<<el.second + 1<<endl;
            break;
        }
    }
    return 0; 
}