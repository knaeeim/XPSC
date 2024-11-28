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
        int m = (n * (n-1))/2; 
        vi a(n), b(m); 

        for(int i=0; i<m; i++){
            cin>>b[i]; 
        }

        sorta(b);

        int x = 1; 
        int indx = 0; 
        int condition = n - x; 

        while(n - x > 0){
            a[indx++] = b[condition - 1];
            x++;
            condition += n - x;
        }

        a[n-1] = 100000000; 

        range(a);  
        cout<<endl;

    }
    return 0; 
}