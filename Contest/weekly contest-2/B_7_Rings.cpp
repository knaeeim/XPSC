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

        int ans = n*x; 

        if(ans >= 10000 and ans <= 99999){
            cout<<"YES\n";
        } 
        else cout<<"NO\n";
    }
    return 0; 
}