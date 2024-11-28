#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;

    long long int ans = 0;

    while (i < n and j < m)
    {
        int cnt1 = 0, cnt2 = 0, curr = a[i];
        while (a[i] == curr and i < n){
            cnt1++;
            i++;
        }

        while(b[j] < curr and j < m){
            j++;
        }
        
        while(b[j] == curr and j < m){
            cnt2++;
            j++;
        }

        ans += (1LL * cnt1 * cnt2);
    }

    cout<<ans<<endl;

    return 0;
}