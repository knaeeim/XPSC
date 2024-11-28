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
    

    int n; 
    cin>>n; 

    vi v(n); 

    for(int i=0; i<n; i++) cin>>v[i]; 

    sorta(v);

    int q;
    cin>>q; 

    while(q--){
        int l, r; 
        cin>>l>>r; 

        int low = n, up = n; 

        int left = 0, right = n - 1;

        while(left <= right){
            int mid = (left+right)/2; 

            if(v[mid] >= l){
                low = mid; 
                right = mid - 1;
            }
            else left = mid + 1;
        }

        left = 0; right = n - 1;

        while( left <= right){
            int mid = (left+right)/2; 

            if(v[mid] > r){
                up = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }

        cout<<up - low << " ";

    }
    return 0; 
}