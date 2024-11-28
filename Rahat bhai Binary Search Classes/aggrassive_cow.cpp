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

bool isValid(int mid, vector <int> v, int c, int n){
    int count = 1; 
    int last = 0;

    for(int i=1; i<n; i++){
        if(abs(v[last] - v[i]) >= mid){
            count++;
            last = i; 
        }
    } 

    return count >= c; 
}


int binary_search_on_ans(vector<int> v, int n, int c){
    int l = 0; 
    int r = INT_MAX; 
    int ans = 0; 
    while( l <= r){
        int mid = l + ( r - l)/2;
        if(isValid(mid, v, c, n)){
            ans = mid; 
            l = mid + 1;  
        }
        else r = mid - 1;  
    }
    return ans; 
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n, c; 
        cin>>n>>c; 

        vi v(n); 

        for(int i=0; i<n; i++) cin>>v[i]; 

        sorta(v); 

        int ans = binary_search_on_ans(v, n, c);
        cout<<ans<<endl; 
    }
    return 0; 
}