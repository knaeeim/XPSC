#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        int a[n]; 

        int mn = INT_MAX;
        int sum = 0;
        
        for(int i=0; i<n; i++){
            cin>>a[i]; 
            mn = min(mn, a[i]);
            sum +=a[i];
        }

        int give = 0; 

        for(int i=0; i<n; i++){
            give +=mn; 
        }

        cout<<abs(give - sum)<<endl;

    }
    return 0; 
}