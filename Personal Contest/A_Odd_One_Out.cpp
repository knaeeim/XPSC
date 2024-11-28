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
        int a, b, c; 
        cin>>a>>b>>c; 

        if(a != b and a != c){
            cout<<a<<endl;
        }
        else if(b != a and b != c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl; 
        }
    }
    return 0; 
}