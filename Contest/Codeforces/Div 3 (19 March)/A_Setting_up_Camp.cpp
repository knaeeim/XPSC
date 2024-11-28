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
        int a, b, c;
        cin >> a >> b >> c;

        long long int cnt = a;

        cnt += (b/3); 

        b %= 3; 

        if(b > 0 and 3- b > c){
            cout<<-1<<endl;
            continue;
        }

        if(b > 0){
            cnt++; 
            c -= 3 - b; 
        }

        b = 0;

        cnt += (c+2)/3;

        cout<<cnt<<endl; 

    }

    return 0;
}