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
        int n, a, b;
        cin >> n >> a >> b;

        int one = (n/2) * b;
        if(n & 1) one +=a;
        cout<<min(one, n*a)<<endl;
    }
    return 0;
}