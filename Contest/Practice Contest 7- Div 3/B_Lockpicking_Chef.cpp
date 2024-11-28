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
        int n, m; 
        cin>>n>>m; 

        string all_locks, screat_key;
        cin>>all_locks>>screat_key; 

        vector <pair <int, int>> v; 

        for(int i = 0; i < n; i++){
            v.pub({all_locks[i] - '0', i});
        }  

        for(auto [x,y]: v){
            cout<< x << " " << y << endl;
        }

        cout<< endl;

        vector <pair<int, int>> screat; 

        for(int i = 0; i < m; i++){
            screat.pub({screat_key[i] - '0', i}); 
        }

        for(auto [x,y]: screat){
            cout<< x << " " << y << endl;
        }

        int ans = 0;

        for(int i = 0; i < m; i++){
            int mn = INT_MAX;
            for(int j = 0; j < n; j++){
                mn = abs(min(screat[i].first - v[j].first, mn));
            }
            ans +=mn;
        }
        cout<< ans <<  endl;
    }
    return 0; 
}