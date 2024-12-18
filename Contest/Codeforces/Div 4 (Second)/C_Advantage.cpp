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
        vi v(n), sorting(n); 

        for(int i = 0; i < n; i++ ){
            cin>>v[i]; 
            sorting[i] = v[i];
        }

        sortd(sorting); 

        vi ans;

        for(int i = 0; i < n; i++){
            int sum;
            if(v[i] != sorting[0]){
                sum = v[i] - sorting[0];
            }
            else{
                sum = v[i] - sorting[1];
            }
            ans.push_back(sum); 
        }

        range(ans); 
        cout<<endl;
    }
    return 0; 
}