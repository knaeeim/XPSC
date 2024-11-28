#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int sonu, titu; 
        cin>>sonu>>titu; 

        int total = sonu + titu; 

        if(sonu > titu){
            int diff = sonu - titu; 
            total +=(diff-1);
            cout<<total<<endl;
        }
        else{
            int diff = titu - sonu; 
            total +=(diff-1);
            cout<<total<<endl;
        }
    }
    return 0; 
}