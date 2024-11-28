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
        int n, k;
        cin >> n >> k;

        int sum = 0;

        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum < n)
        {
            cout << "NO\n";
        }
        else
        {
            vector<int> ans(n);

            while (sum > 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (sum != 0)
                    {
                        ans[i] += 1;
                        sum -= 1;
                    }
                }
            }

            int mn = INT_MAX, mx = INT_MIN;
            for (int i = 0; i < ans.size(); i++)
            {
                if (ans[i] > mx)
                {
                    mx = ans[i];
                }

                if (ans[i] < mn)
                {
                    mn = ans[i];
                }
            }

            int diff = mx - mn;

            if (diff <= k)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}