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

        vector <int> ans[n+1]; 

        int value = 1; 

        for(int i = 1 ; i <= n; i++){
            ans[i].resize(m+1);
            for(int j = 1; j <=m; j++){
                ans[i][j] = value; 
                value++;
            }
        }

        for(int i = 2; i <=n; i+=2){
            for(int j = 1; j <= m; j++){
                cout << ans[i][j]<<" ";
            }
            cout<< endl;
        }

        for(int i = 1; i <=n; i+=2){
            for(int j = 1; j <= m; j++){
                cout << ans[i][j]<<" ";
            }
            cout<< endl;
        }
        cout << endl; 
    }
    return 0; 
}