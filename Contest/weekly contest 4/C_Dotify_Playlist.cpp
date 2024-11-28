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
        int n, k, lan; 
        cin>>n>>k>>lan; 

        int Totalmin = 0;
        vp v;

        for(int i=0; i<n; i++){
            int mini, l; 
            cin>>mini>>l; 
            if(lan == l){
                v.pub({mini, l});
            }
        }

        v.erase(unique(v.begin(), v.end()), v.end());

        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b){
            return a.first > b.first; 
        });

        if(v.empty()) cout<<-1<<endl;
        else{
            for(int i=0; i < min(k, (int)v.size()); i++){
                Totalmin += v[i].first;
            }

            if(Totalmin == 0) cout<<-1<<endl;
            else cout<<Totalmin<<endl; 
        }
    }
    return 0; 
}