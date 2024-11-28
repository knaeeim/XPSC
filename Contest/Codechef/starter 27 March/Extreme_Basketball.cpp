#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int alice, bob; 
        cin>>alice>>bob; 

        int diff = alice - bob; 

        if(diff > 10) cout<<0<<endl; 
        else{
            int cnt = 0;
            while(diff < 10){
                diff +=3;
                cnt++;
            }
            cout<<cnt<<endl;
        }       
    }
    return 0; 
}