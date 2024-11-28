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

bool possible(vi v, ll mid){
    multiset <int> ml; 
    for(auto a: v){
        ml.insert(a);
    }

    for(int i = 1; i <= mid; i++ ){
        if(ml.empty()) return false;
        int require = mid - i + 1;
        auto ii = ml.upper_bound(require);
        if(ii == ml.begin()) return false;
        ii--;
        ml.erase(ii);

        if(!ml.empty()){
            ii = ml.begin(); 
            ll v = (*ii); 
            v += require;
            ml.erase(ii); 
            ml.insert(v);
        } 
    }
    return true;
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        vi v(n); 
        for(int i = 0; i < n; i++ ) cin>>v[i]; 

        int k; 
        ll left = 0, right = n; 

        while(left <= right){
            ll mid = left + (right - left) / 2; 

            if(possible(v, mid)){
                k = mid;
                left = mid + 1;
            }
            else right = mid - 1; 
        }

        cout<< k <<endl;
    }
    return 0; 
}