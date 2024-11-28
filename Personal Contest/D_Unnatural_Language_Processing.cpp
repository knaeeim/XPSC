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
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans = "";

        while(!s.empty()){
            int x = 0;
            if(s.back() == 'a' or s.back() == 'e') x = 2;
            else x = 3;

            while(x--){
                ans +=s.back();
                s.pop_back();
            }
            ans +='.';
        }
        ans.pop_back();
        reverse(ans.begin(), ans.end());

        cout << ans << endl;
    }
    return 0;
}