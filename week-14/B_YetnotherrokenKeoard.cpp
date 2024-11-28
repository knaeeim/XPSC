#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using order_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define int long long
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


int32_t main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        string s; 
        cin>>s; 

        stack <pair<char, int>> stCap, stSmall;

        for(int i = 0; i < s.size(); i++){
            if(isupper(s[i])){
                if(s[i] == 'B'){
                    if(!stCap.empty()){
                        stCap.pop();
                    }
                }
                else{
                    stCap.push({s[i],i});
                }
            }
            else{
                if(s[i] == 'b'){
                    if(!stSmall.empty()){
                        stSmall.pop();
                    }
                }
                else{
                    stSmall.push({s[i], i});
                }
            }
        }

        vector <pair<char, int>> ans;

        while(!stCap.empty()){
            ans.push_back(stCap.top());
            stCap.pop();
        }

        while(!stSmall.empty()){
            ans.push_back(stSmall.top());
            stSmall.pop();
        }

        sort(ans.begin(), ans.end(), [&] (pair<char, int>a, pair<char, int>b){
            return a.second < b.second;
        });

        string answer;

        for(auto[x, y] : ans){
            answer.push_back(x);
        }

        cout << answer << endl;

    }
    return 0; 
}