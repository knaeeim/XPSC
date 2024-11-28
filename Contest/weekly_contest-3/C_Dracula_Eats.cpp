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
        int n; 
        cin>>n; 
        int cnt = 0;
        for(int i= 2; i<=n; i+=7){
            cnt++;
        }

        if(n < 2){
            cout<<0<<endl;
        }
        else{
            cout<<cnt<<endl;
        }
    }
    return 0; 
}