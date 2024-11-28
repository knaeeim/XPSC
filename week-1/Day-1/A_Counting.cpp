#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int a, b; 
    cin>>a>>b; 

    if(a>b) cout<<0<<endl;
    else{
        int sum = b - a;
        cout<<sum+1<<endl; 
    }
    return 0; 
}