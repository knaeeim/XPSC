#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        string s; 
        cin>>s; 

        if(s.find("it") == string::npos){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
    return 0;
}