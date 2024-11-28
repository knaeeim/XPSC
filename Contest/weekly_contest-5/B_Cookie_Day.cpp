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
        ll n, child; 
        cin>>n>>child; 

        vll v(n); 
        ll ans = INT_MIN;
        for(int i = 0; i < n; i++){
            cin>>v[i];
            if(v[i] >= child){
                ans = v[i];
            }
        }

        if(ans == INT_MIN ) cout<<-1<<endl;
        else if(ans == child) cout<<0<<endl;
        else{

            ll final_ans = INT_MAX; 

            for(int i = 0; i < n; i++ ){
                if(v[i] >= child){
                    final_ans = min(final_ans, v[i] % child);
                } 
            }

            if(final_ans == INT_MAX) cout<<-1<<endl;
            else cout<<final_ans<<endl;
        }


    }
    return 0; 
}