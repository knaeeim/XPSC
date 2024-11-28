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

        string s; cin>>s; 

        int a = 0, b =0; 

        int f = 0; 

        for(auto e: s){
            if(f + '0' == e){
                f ^=1;
            }
            else a++;
        }

        f = 1; 

        for(auto e: s){
            if(f + '0' == e){
                f ^=1;
            }
            else b++;
        }

        cout<<min(a, b)<<endl; 
    }
    return 0; 
}