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

        int a[n];
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        int triple = 0;
        bool flag = false; 

        for(int i=0; i<n; i++){
            if(mp[a[i]] >= 3){
                triple = a[i];
                flag = true;
            }
        }

        if(flag) cout<<triple<<endl;
        else cout<<-1<<endl;

    }
    return 0;
}