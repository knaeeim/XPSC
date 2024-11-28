#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }

    int ep = 0;

    for (int i = 1; i <= n; i++)
    {
        if (mp[i] == 0)
        {
            ep = i;
            break;
        }
    }

    cout << ep << endl;

    return 0;
}