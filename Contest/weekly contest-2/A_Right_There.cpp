#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n, x; 
        cin>>n>>x; 

        if(n > x) cout<<"NO\n";
        else cout<<"YES\n";
    }
    return 0; 
}