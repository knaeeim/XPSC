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

        int Ones = 0, Zeros = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1') Ones++;
            else Zeros++;
        }

        string ans = "";

        for(int i = 0; i < s.size(); i++){
            if(s[i] == '1'){
                if(Zeros > 0){
                    ans.pub('0');
                    Zeros--;
                }
                else break;
            }
            else{
                if(Ones > 0){
                    ans.pub('1');
                    Ones--;
                }
                else break;
            }
        }

        cout << s.size() - ans.size() << endl;
    }
    return 0; 
}