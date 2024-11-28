#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    string s; 
    cin>>s; 

    char frq[26]; 
    char current_char = 'a';
    for(int i=0; i<26; i++){
        frq[i] = current_char++;  
    }

    map<int, int> mp;

    string ans;

    for(char x: s){
        mp[x]++;
    }

    for(int x: frq){
        if(mp[x] == 0){
           ans+=x; 
        }
    }
    // cout<<ans<<endl;
    sort(ans.begin(), ans.end());
    // cout<<ans<<endl;

    if(ans.empty()) cout<<"None\n";
    else cout<<ans[0]<<'\n';
    return 0; 
}