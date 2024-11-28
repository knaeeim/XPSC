#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    string s; cin>>s; 

    map<char, int> mp; 

    char ch;

    for(char c: s){ 
        mp[c]++;
    }

    int cnt = 0; 

    for(auto [x,y] : mp){
        if(y % 2){
            ch = x;
            cnt++;
        }
    }

    if((s.size() % 2 == 0 and cnt > 0) or cnt > 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        string ans = "";

        for(auto [x,y] : mp){
            for(int i =0; i < y/2; i++){
                ans +=x;
            }
        }

        cout << ans;

        if(s.size() & 1){
            cout<<ch;
        }

        reverse(ans.begin(), ans.end());
        cout << ans;
    }
    return 0; 
}