#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long int> a(n);
    vector<long long int> b(m);
    vector<long long int> c;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < m; i++)
        cin >> b[i];

    int l = 0, r = 0;

    while (l < n and r < m)
    {
        if (a[l] < b[r])
        {
            c.push_back(a[l]);
            l++;
        }
        else
        {
            c.push_back(b[r]);
            r++;
        }
    }

    while (l < n)
    {
        c.push_back(a[l]);
        l++;
    }

    while (r < m)
    {
        c.push_back(b[r]);
        r++;
    }

    for (int x : c)
        cout << x << " ";
    cout << endl;

    return 0;
}