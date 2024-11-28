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
        map <char, int> mp; 
        for(int i =0; i<3; i++){
            for(int j=0; j<3; j++){
                char a; cin>>a; 
                mp[a]++;
            }
        }

        char ans;

        for(auto x: mp){
            if(x.second == 2){
                ans = x.first;
            }
        }

        cout<<ans<<endl; 
    }
    return 0;
}