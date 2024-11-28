#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    // 123 456 100

    for (int i = 0; c * i <= b; i++)
    {
        if (c * i >= a and c * i <= b){
            cout << c * i << '\n';
            return 0;
        }
    }

    cout << -1 << '\n';

    return 0;
}