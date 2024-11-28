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
        for(int i=0; i<n; i++) cin>>v[i]; 

        int sum = 0; 
        int cnt = 0, i = 0; 

        sorta(v);

        while(cnt < k and i <= n){
            if(v[i] == 1){
                v[i] = 6;
                cnt++;
            }
            else if(v[i] == 2){
                v[i] = 5;
                cnt++;
            }
            else if(v[i] == 3){
                v[i] = 4;
                cnt++;
            }
            i++;
        }

        for(int i=0; i<n; i++){
            sum +=v[i];
        }

        cout<<sum<<endl;
    }
    return 0; 
}