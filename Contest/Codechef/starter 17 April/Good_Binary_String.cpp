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
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 
        string s; 
        cin>>s; 

        vi idx; 

        int f = 1;

        for(int i = 0; i< n - 1; i+=2){
            if(s[i] != s[i+1]){
                if(f != s[i] - '0'){
                    idx.pub(i + 1);
                    f = f ^ 1;
                }
                else{
                    idx.pub(i + 2);
                    f = f ^ 1; 
                }
            }
        }

        cout<<idx.size()<<endl;
        for( auto el : idx ){
            cout<<el<<" ";
        }
        cout<<endl;
    }
    return 0; 
}