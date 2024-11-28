#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; 
    cin>>t; 

    while(t--){
        ll n; 
        cin>>n;

        ll a[n]; 
        ll sum = 0; 

        for(int i=0; i<n; i++){
            cin>>a[i];
            sum +=a[i];
        }

        ll square = sqrt(sum);

        if((square * square) == sum ) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0; 
}