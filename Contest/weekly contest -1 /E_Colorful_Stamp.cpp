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
        string s;cin>>s; 

        bool flag = false;

        for(int i=0; i<n-1; i++){
            if((s[i] == 'B' and s[i+1] == 'R') or (s[i] == 'R' and s[i+1] == 'B')){
                flag = true;
                break;
            }
        }

        if(flag) cout<<"YES\n";
        else cout<<"NO\n";

    }
    return 0; 
}