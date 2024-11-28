#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; 
    cin>>t; 

    while(t--){
        int n; cin>>n;

        int a[n]; 
        for(int i=1; i<=n; i++) cin>>a[i]; 

        int ans = a[1] - 1;
        int idx = ans; 

        for(int i=2; i<=n; i++){
            if(idx + i < a[i]){
                int x = a[i] - idx-i; 
                ans +=x;
                idx+=x;
            }
        }

        // int ans = 0; 
        // int k = 1;
        // int idx = 1; 

        // for(int i=1; i<=n; i++){
        //     if(a[k] > idx){
        //         ans = ans + a[k] - idx;
        //         idx = idx + a[k] - idx; 
        //     }
        //     idx++;
        //     k++;
        // } 

        cout<<ans<<endl;
    }
    return 0; 
}