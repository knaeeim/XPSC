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
        int alice, bob;
        cin >> alice >> bob;

        int total = alice + bob; 

        if(total%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}