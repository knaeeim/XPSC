#include <bits/stdc++.h>
using namespace std;

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

        int sz = n * 3;
        int sz1 = n * 3;

        vector<string> v;
        map<string, int> mp;

        while (sz1--)
        {
            cin >> s;
            v.push_back(s);
            mp[s]++;
        }

        int one = 0, two = 0, three = 0;

        int k = 0;

        for (int i = 1; i <= 3; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (k <= sz)
                {
                    if (i == 1)
                    {
                        if (mp[v[k]] == 1)
                            one += 3;
                        else if (mp[v[k]] == 2)
                            one += 1;
                        else if (mp[v[k]] == 3)
                            one += 0;
                    }
                    else if (i == 2)
                    {
                        if (mp[v[k]] == 1)
                            two += 3;
                        else if (mp[v[k]] == 2)
                            two += 1;
                        else if (mp[v[k]] == 3)
                            one += 0;
                    }
                    else if (i == 3)
                    {
                        if (mp[v[k]] == 1)
                            three += 3;
                        else if (mp[v[k]] == 2)
                            three += 1;
                        else if (mp[v[k]] == 3)
                            three += 0;
                    }
                }
                k++;
            }
        }

        cout << one << " " << two << " " << three << endl;
    }

    return 0;
}