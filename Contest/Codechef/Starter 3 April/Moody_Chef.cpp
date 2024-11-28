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
        int n, l, r;
        cin >> n >> l >> r;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int mx = 0 ,mn = 0, cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if (l <= a[i] and a[i] <= r)
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else{
                cnt--;
                mn = min(mn, cnt);
            }
        }
        cout << mx << " " << mn << endl;
    }
    return 0;
}