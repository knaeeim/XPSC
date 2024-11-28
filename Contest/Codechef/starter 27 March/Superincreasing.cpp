#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n, k, x; 
        cin>>n>>k>>x; 

        int a[n+1] = {0};

        a[1] = 1; 

        for(int i=2; i<=n ; i++){
            a[i] = a[i-1] + i; 
        }

        if(a[k] == x) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0; 
}