#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s; 
    cin>>s;

    int n = s.size(); 

    if(n==4) cout<<s<<'\n';
    else if(n==3) cout<<"0"<<s<<'\n'; 
    else if(n==2) cout<<"00"<<s<<'\n'; 
    else if(n==1) cout<<"000"<<s<<'\n'; 

    return 0; 
}