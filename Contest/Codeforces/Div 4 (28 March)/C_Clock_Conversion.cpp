#include <bits/stdc++.h>
using namespace std;
#define ll long long

string toString(int n)
{
    string s = "";

    while (n)
    {
        s += (n % 10) + '0';
        n /= 10;
    }
    reverse(s.begin(), s.end());

    if (s.size() == 1)
        s = "0" + s;
    return s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        string ans = "";

        int hrs = (s[0] - '0') * 10 + (s[1] - '0');

        if (hrs == 0){
            ans +="12";
        }
        else if(hrs <= 12){
            ans += s.substr(0, 2);
        }
        else {
            ans += toString(hrs - 12);
        }

        ans += ":";
        ans += s.substr(3, 2);

        if(hrs < 12){
            ans += " AM";
        }
        else{
            ans += " PM";
        }

        cout<<ans<<endl;
    }
    return 0;
}