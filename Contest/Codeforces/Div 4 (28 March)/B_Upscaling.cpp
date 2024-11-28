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
        int n;
        cin >> n;

        string s; 

        for(int i=1; i<=n; i++){
            if(i%2==1) s+="##";
            else s+="..";
        }

        string t; 

        for(int i=1; i<=n; i++){
            if(i%2==1) t+="..";
            else t+="##";
        }

        for(int i=1; i<=n; i++){
            if(i%2==1) cout<<s<<'\n'<<s<<'\n';
            else cout<<t<<'\n'<<t<<'\n';
        }
        
    }
    return 0;
}

