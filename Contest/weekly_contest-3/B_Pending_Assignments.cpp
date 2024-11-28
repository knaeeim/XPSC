#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int x, y, z; 
        cin>>x>>y>>z; 

        int hrs = z * 24 * 60; 

        int time = x * y; 

        if(hrs >= time) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0; 
}